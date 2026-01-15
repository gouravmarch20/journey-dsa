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
    console.log("par_", isPalindrome(remStr));
    //!m1::: wrong place ___ for curr new partation to add ko test 
    // if (isPalindrome(remStr) === false) return;
    if (remStr?.length == 0) result.push([...partation]);
    // ? for choise ease __ exclude 
    for (let i = 1; i <= remStr?.length; i++) {
      const choise = remStr.substring(0, i);
      //!m2::  return close whole case ==> efe ==> [ e_ , ef , efe] ==> furter posible case   
      if (!isPalindrome(choise)) continue;
      console.log("debug", choise, i);
      partation.push(choise);
      //! 0 to 1 index substring include 0 index only __ is choise but remStr is 1 to end not +1  
      //  par(partation, remStr.substring(i + 1))
      par(partation, remStr.substring(i));

      partation.pop();
    }
  }
  par([], s);
  return result;
};
