/**
 * @param {number[]} arr
 * @return {number}
 */
var peakIndexInMountainArray = function (arr) {
  let e = arr.length - 1;
  let s = 0;
  while (s < e) {
    let m = Math.floor((s + e) / 2);
    console.log("debug_", s, e, m, arr[m], arr[m + 1]);
    // !  not not rotate array relation here 
    //     if(arr[m] > arr[m-1] && arr[m] > arr[m+1]){
    //         return m;
    // // --> (arr[m] < arr[m+1] ==> not not rotate arrya
    //     }else

    if (arr[m + 1] > arr[m]) {
      s = m + 1;
      // e = m ;
    } else {
      // s = m + 1 ;

      e = m;
    }
  }
  return s;
};
