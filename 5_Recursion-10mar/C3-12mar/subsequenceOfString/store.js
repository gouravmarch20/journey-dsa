function printSubString(s, output, i , arr) {
  if (i >= s.length) {
    // console.log(output);
    arr.push(output);

    return;
  }
  // exclude
  printSubString(s, output, i + 1,arr);
  // include
  output += s[i];
  printSubString(s, output, i + 1,arr);
}


const s = "ab";
let output = "";
let i = 0;
let arr =[]
printSubString(s, output, i,arr);
console.log(arr);