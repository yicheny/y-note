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