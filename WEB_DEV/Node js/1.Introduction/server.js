console.log("hello world");
var slugify = require('slugify')
let x=`string is sugif@^#@ied by deaful&#%@#t by slugify`
let y='hii, this string is %%% #@%!@&!*& converted to slug by specific symbol by slugify ';
let a=slugify(x) // some-string

// if you prefer something other than '-' as separator
let b=slugify(y, '_')  // some_string
console.log(a,"\n",b);
console.log(x.trim(),"\n",y.trim());
