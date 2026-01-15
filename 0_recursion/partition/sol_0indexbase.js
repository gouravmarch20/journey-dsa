/**
 * @param {string} s
 * @return {string[][]}
 */

function isPalindrome(str) {
  let left = 0;
  let right = str.length - 1;

  while (left < right) {
    if (str[left] !== str[right]) return false;
    left++;
    right--;
  }

  return true;
}

var partition = function (s) {
  let result = [];
  function par(partation, remStr) {
    // console.log("par_", isPalindrome(remStr))
    if (remStr?.length == 0) result.push([...partation]);

    for (let i = 0; i < remStr?.length; i++) {
      const choise = remStr.substring(0, i + 1);

      if (!isPalindrome(choise)) continue;
      partation.push(choise);
      par(partation, remStr.substring(i + 1));

      partation.pop();
    }
  }
  par([], s);
  return result;
};
