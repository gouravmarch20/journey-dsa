/**
 * @param {string} s
 * @return {string}
 */
var reorganizeString = function(s) {
    let ans = ''
    const alphabet = 'abcdefghijklmnopqrstuvwxyz'
    const charCounts = new Array(26).fill(0)
    for (let i = 0; i < s.length; i++) {
        const char = s.charAt(i)
        charCounts[alphabet.indexOf(char)]++
    }
    let maxValue = Math.max(...charCounts);
    while(maxValue > 0) {
        let mostFrequentChar = alphabet[charCounts.indexOf(maxValue)]
        let lastAddedChar = ans[ans.length - 1]
        if (lastAddedChar !== mostFrequentChar) {
            ans += mostFrequentChar
            charCounts[charCounts.indexOf(maxValue)]--
            maxValue = Math.max(...charCounts);
        } else {
            let found = false
            for (let i = 0; i < charCounts.length; i++) {
                if (charCounts[i] <= 0) continue
                if (alphabet[i] !== mostFrequentChar) {
                    ans += alphabet[i]
                    charCounts[i]--
                    found = true
                    break
                }
            }
            if (!found) return '' 
        }
    }
    return ans
};