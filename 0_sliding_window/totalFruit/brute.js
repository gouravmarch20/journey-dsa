/**
 * @param {number[]} fruits
 * @return {number}
 */
var totalFruit = function (fruits) {
  let maxi = 0;
  for (let i = 0; i < fruits.length; i++) {
    let mySet = new Set();

    for (let j = i; j < fruits.length; j++) {
      mySet.add(fruits[j]);
      if (mySet?.size == 2 || mySet.size == 1) {
        // console.log(maxi, i, j + 1);
        maxi = Math.max(maxi, j - i + 1);
      }

      if (mySet.size > 2) {
        break;
      }
    }
  }
  return maxi;
};
const f = [1, 1, 2, 3, 2, 2, 1, 3];
const r = totalFruit(f);
console.log(r);
