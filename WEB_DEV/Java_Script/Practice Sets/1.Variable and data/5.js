// Word meaning dictornary of 5 words 
console.log(`***************** Wellcome to word meaning of 5 imp words *****************\n`);
let dictornary={
    //word:meaning formate
    "node JS":"Node.js is a cross-platform, open-source JavaScript runtime environment that can run on Windows, Linux, Unix, macOS, and more. Node.js runs on the V8 JavaScript engine, and executes JavaScript code outside a web browser.",
    "32-bit signed int":"A 32-bit signed integer. It has a minimum value of -2,147,483,648 and a maximum value of 2,147,483,647 (inclusive)",
    "cpu cycle":"the basic unit of time in a computer's central processing unit (CPU). It represents one complete operation of the CPU, including fetching, decoding, executing, and storing data.",
    "NPU":"There is a type of processor that works in very much the same way as the human brain, called the NPU or Neural Processing Unit. The NPU is made up of countless numbers of nerve cells and synapses that transmit and receive signals to and from each other simultaneously, just like the human brain.",
    "Iris":"Iris Xe Graphics, Intel's flagship integrated graphics solution for 12th-generation architecture, has 80 or 96 execution units (EUs). Independent benchmark data shows that these integrated GPUs perform well for everyday computing and light gaming."
}
for (const key in dictornary) {
    console.log(`\n${key} => ${dictornary[key]} \n`);
}
