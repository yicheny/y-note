//用于debug的追踪函数
var trace = curry(function (tag, x) {
    console.log(tag, x);
    return x;
});