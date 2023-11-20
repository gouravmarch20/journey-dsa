function checkInclusion(s, i) {
  if (i >= s.length) {
    console.log(s + " ");
    return;
  }

  for (let j = i; j < s.length; j++) {
    s = swapChars(s, i, j);

    checkInclusion(s, i + 1);
    s = swapChars(s, i, j);
  }
}

function swapChars(str, i, j) {
  const arr = str.split("");
  const temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
  return arr.join("");
}

function main() {
  const s = "abc";
  checkInclusion(s, 0);
}

main();
