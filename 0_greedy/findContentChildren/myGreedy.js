/**
 * @param {number[]} g
 * @param {number[]} s
 * @return {number}
 */
var findContentChildren = function(g, s) {
    const newChildGreedy = g.sort((n1 , n2) => n1 - n2 );
    const newCookieSize = s.sort((n1 , n2) => n1 - n2 );
    console.log(newChildGreedy , newCookieSize)
    let i = 0 , j = 0;

    while(i < newChildGreedy.length && j < newCookieSize.length ){
    console.log(newChildGreedy[i] , newCookieSize[j])
        if(newChildGreedy[i]  <= newCookieSize[j]){
            i++ ;
            j++;
        }else{
            j++;
        }
    }
    return i ;
};