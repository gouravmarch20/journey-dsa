/**
 * @param {number[]} fruits
 * @return {number}
 */
var totalFruit = function(fruits) {
    let l = 0 , maxi = 0 , n = fruits.length ;

      let map = new Map();

    for(let r = 0 ; r < n ; r++){
        const fruitR = fruits[r]
        map.set(fruitR , (map.get(fruitR) || 0) + 1);
        if(map.size > 2){
            const fruitL = fruits[l]
            map.set(fruitL , map.get(fruitL) - 1) ;
            if(map.get(fruitL) == 0){
                map.delete(fruitL);
            }
            l++;
        }
        maxi = Math.max(maxi , r - l + 1);
    }
    return maxi;
};