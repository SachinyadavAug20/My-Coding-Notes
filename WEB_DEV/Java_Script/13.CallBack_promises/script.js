console.log("I am on line 1");
console.log("I am on line 2");
setTimeout((e) => {
    console.log("i am settimeout of 2s at line 3");
}, 2000);
setTimeout((e) => {
    console.log("i am settimeout of 0s at line 5");
}, 0);
setTimeout((e) => {
    console.log("i am settimeout of 0s at line 7");
}, 0);

console.log("I am at end");
const f = (a) => {
    console.log(a);
}
const callme = (a, fn) => {//it also takes a call back
    console.log(a);
    fn("callback is callback is runned")
}
const load_me = (src, call) => {//made a function which takes a url and a function 
    let a = document.createElement("script");//made a script tag
    // a.setAttribute("src",src);  OR
    a.src = src;
    document.body.append(a);
    a.onload = call("Callback has runned",f);//when your script a will be loaded this function will be called
}
load_me("1.js", callme);
