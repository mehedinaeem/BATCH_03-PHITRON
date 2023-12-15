"use strict";
const prompt = require("prompt-sync")();

// array sum
var array = [];
var n = parseInt(prompt("Enter array size:"));

for (var i = 0; i < n; i++) {
    var e = parseInt(prompt(`Enter element ${i + 1}:`));
    array.push(e);
}

// Output array elements on the same line with spaces and calculate sum
var sum = 0;
process.stdout.write("Array elements: ");
for (var i = 0; i < n; i++) {
    process.stdout.write(array[i] + " ");
    sum += array[i];
}

console.log("\nthe sum is ",sum);

