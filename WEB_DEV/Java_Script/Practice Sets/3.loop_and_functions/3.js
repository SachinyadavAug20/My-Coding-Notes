//program to find mean of n numbers
function to_get_n_numbers(n,numbers){
    for(let i=0;i<n;i++){
        numbers[i]=prompt("Enter "+Math.floor(i+1)+"th number");
        console.log(numbers[i]);
    }
}
function mean_of_n_numbers(n,numbers){
    let sum=0;
    for (const element of numbers) {
        sum=parseInt(sum)+parseInt(element);
    }
    console.log(sum);
    console.log(n);
    return sum/n;
}
let numbers=[];//made empty array
let n=prompt("How many numbers you have to find mean");
to_get_n_numbers(n,numbers);
alert("the mean is "+mean_of_n_numbers(n,numbers));
