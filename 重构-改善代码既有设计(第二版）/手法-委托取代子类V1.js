class Comic{
    constructor(price, date) {
        this._price = price;
        this._date = date;
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

class AdultComic extends Comic{
    constructor(price,date,extra) {
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

main();
function main() {
    // const normalDay = new Date('2020-12-03');
    const peakDay = new Date('2020-12-05');
    const adultComic = new AdultComic(200, peakDay , true);
    console.log(adultComic);
}