alert(`Hello promse`);
console.log('I am here');

let prom1=new Promise((resolve,reject)=>{
    if(Math.random()>0.5){
        reject("random number is less than 0.5 so, luck is not on your side SAD1");
    }
    else{

        
        setTimeout(()=>{
            console.log('I am in promise1');
            resolve("happy1");//callback for this        
        },2000)
    }
})

let prom2=new Promise((resolve,reject)=>{
    if(Math.random()>0.5){
        reject("random number is less than 0.5 so, luck is not on your side SAD 2");
    }
    else{

        
        setTimeout(()=>{
            console.log('I am in promise2');
            resolve("happy2");//callback for this        
        },1000)
    }
})
// prom1.then((a)=>{
//     console.log("I am after Resolved");
//     console.log(a);
// }).catch((e)=>{
//     console.log('I am after reject');
//     console.log(e);
    
// })

//output of promise API is the status of the promise in a array
// let p=Promise.all([prom1,prom2]);                //will give output iff both resolved
// let p=Promise.allSettled([prom1,prom2]);            //will give outup iff both resolved or rejected
// let p=Promise.race([prom1,prom2]);                      //will excute only the fastest
let p=Promise.race([prom1,prom2]);                      //

p.then((a)=>{//will excute the fastest here it is the 2nd prom2 =>excutes both in speed order and then displayes the array of promises
    //NOTE: will show array of p if and only if both are resolved (if any is rejected it won`t show the Array)
    console.log("I am after Resolved");
    console.log(a);
}).catch((e)=>{
    console.log('I am after reject');
    console.log(e);
    
})


//Excution
// prom1() runs auto as it is variable
