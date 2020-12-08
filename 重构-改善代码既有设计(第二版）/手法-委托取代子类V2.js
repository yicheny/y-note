class Comic {
    constructor(price, date) {
        this._price = price;
        this._date = date;
    }

    _beAudlt(extra) {
        this._adultDelegate = new AdultComicDelegate(this, extra);
    }   

    get canBuy() {
        return this._price > this.basePrice && !this.isPeakDay;
    }

    get isPeakDay() {
        return this._date.getDay() === 6;
    }

    get basePrice() {
        return 99;
    }
}

class AdultComic extends Comic {
    constructor(price, date, extra) {
        super(price, date);
        this._extra = extra;
    }

    get canBuy() {
        return this._price > this.basePrice;
    }

    get extraServe() {
        return this._extra && !this.isPeakDay;
    }

    get basePrice() {
        return this.isPeakDay ? 299 : 199;
    }
}

class AdultComicDelegate{
    constructor(hostComic, extra) {
        this._host = hostComic;
        this._extra = extra;
    }
}

function crateComic(price,date) {
    return new Comic(price,date);
}

function createAdultComic(price, date, extra) {
    // return new AdultComic(price, date, extra);
    const hostComic = new AdultComic(price, date, extra);
    hostComic._beAudlt(extra);
    return hostComic;
}

main();
function main() {
    // const normalDay = new Date('2020-12-03');
    const peakDay = new Date('2020-12-05');
    const adultComic = createAdultComic(200, peakDay, true);
    console.log(adultComic);
}