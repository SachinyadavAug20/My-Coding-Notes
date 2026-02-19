//The Password Validator: You are building a password validation feature. Create a function that checks if a given password meets the following criteria: at least 8 characters long, contains both uppercase and lowercase letters, and includes at least one digit.
let password="so!72gdfgd";
let character_array_of_password=Array.from(password),i=0,j=0,k=0;
if(password.length>=8){
    for (const a of character_array_of_password) {
        let ascii_code=a.charCodeAt(0);
        if(ascii_code>=65&&ascii_code<=90){
            i++;
        }
        if(ascii_code>=97&&ascii_code<=112){
            j++;
        }
         if(ascii_code>=48&&ascii_code<=57){
            k++;
        }
    }
    if(i>=1&&j>=1&&k>=1){
        console.log("Password is accepted")
    }
    else{
        console.log("Password must have both upper and lower case character and a digit");
    }
}
else{
    console.log("Password must be atleast 8 charcters long");
}
