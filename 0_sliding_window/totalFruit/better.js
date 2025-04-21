/**
 * @param {number[]} fruits
 * @return {number}
 */
var totalFruit = function (fruits) {
  let l = 0,
    maxi = 0,
    n = fruits.length;
  //! m1 let myMap = new map()
  let myMap = new Map();

  for (let r = 0; r < n; r++) {
    //! m2 myMap.add( fruits[r] , ( myMap.get(fruits[r]) || 0 )+ 1 )
    myMap.set(fruits[r], (myMap.get(fruits[r]) || 0) + 1);

    while (myMap.size > 2) {
      //! m3 myMap.set(fruits[l] , myMap.get(fruits[l] - 1) ) ;
      myMap.set(fruits[l], myMap.get(fruits[l]) - 1);
      if (myMap.get(fruits[l]) == 0) {
        myMap.delete(fruits[l]);
      }
      l++;
    }

    maxi = Math.max(maxi, r - l + 1);
  }
  return maxi;
};
