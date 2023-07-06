/**
 * @param {number} dividend
 * @param {number} divisor
 * @return {number}
 */
var divide = function(dividend, divisor) {
    const val =  Math.floor( Math.abs(dividend) / Math.abs(divisor))
    if(val >= Math.pow(2 , 31) ){
   if((dividend > 0 && divisor) > 0 ||( dividend<0 && divisor <0 )){
       return ( Math.pow(2 , 31) - 1)
    }else{
       return  Math.pow(-2 , 31) 
    }
    }
    if((dividend > 0 && divisor) > 0 ||( dividend<0 && divisor <0 )){
       return val
    }else{
       return -1 * val
    }
 };