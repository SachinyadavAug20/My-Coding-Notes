let a=[1,3,6,5,2,8];
//Edit this array to make new array all element to a*3+5
console.log(a);
//traditional method
let newarr =[];
for(let index=0;index<a.length;index++){
    newarr.push(a[index]**2+5);
}
console.log(newarr);

//OR way
let newarr2=a.map((a1,i,arr)=>{
    return a1**2+5;
})
console.log(newarr2);