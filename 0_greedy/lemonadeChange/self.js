/**
 * @param {number[]} bills
 * @return {boolean}
 */
var lemonadeChange = function (bills) {
  let fiveCnt = 0,
    tenCnt = 0;

  for (const el of bills) {
    // console.log("--" , el ,fiveCnt ,tenCnt  )
    if (el == 5) {
      fiveCnt++;
    } else if (el == 10) {
      tenCnt++;
      if (fiveCnt > 0) {
        fiveCnt--;
      } else {
        return false;
      }
    } else if (el === 20) {
      //   ! first give => 10 note , if not avalibe then look 5 --> 10 also need 5 note so bit greedy

      if (fiveCnt >= 1 && tenCnt >= 1) {
        tenCnt -= 1;
        fiveCnt -= 1;
      } else if (fiveCnt >= 3) {
        fiveCnt -= 3;
      } else {
        return false;
      }
      //  if(fiveCnt >= 3 ){
      //     fiveCnt -= 3 ;
      // }else if(fiveCnt >= 1 && tenCnt >= 1 ){
      //     tenCnt -= 1;
      //     fiveCnt -= 1;
      // }else {
      //     return false;
      // }
    } else {
      return false;
    }
  }
  return true;
};
