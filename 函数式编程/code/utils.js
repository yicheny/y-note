// id :: a -> a;
var id = x => x;

//compose :: (a -> b)…… -> (c -> d);
function compose(...funcs) {
    if (funcs.length === 0) return arg => arg;
    if (funcs.length === 1) return funcs[0];
    return funcs.reduce((a, b) => (...args) => a(b(...args)))
}

// map :: Functor f => (a -> b) -> f a -> f b
var map = _.curry(function (f,any_functor_at_all) {
    return any_functor_at_all.map(f);
})

//concat :: String -> String -> String
var concat = _.curry((a,b)=>a.concat(b));

//add :: Number -> Number -> Number
var add = _.curry((x,y)=>(x+y));

//prop :: String -> {} -> a
var prop = _.curry((prop,o)=>o[prop]);

// split :: String -> String -> [String]
var split = _.curry((sym,str)=>(str.split(sym)));

// head :: [a] => a
var head = (ary)=>ary[0];

// last :: [a] => a
var last = (ary)=>ary[ary.length-1];

// filter :: [a] => [a]
var filter = _.curry((fn,ary)=>ary.filter(fn));

// eq :: a -> a -> Bool
var eq = _.curry((x,y)=>Object.is(x,y));