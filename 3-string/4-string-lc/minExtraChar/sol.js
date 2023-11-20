const minExtraChar = (s, dictionary) => {
    dictionary = new Set(dictionary)
    const memo = {}
    const recursiveFunction = (word, subString, score) => {
        if (word.length === 0) return subString.length + score
        
        for (let j = 1; j <= word.length; j++) {
            subString += word.slice(0, j)
            word = word.slice(j)
            
            const key = `${word}-${subString}-${score}`
            if (key in memo) return memo[key]

            return memo[key] = dictionary.has(subString) ?  
              Math.min(recursiveFunction(word, subString, score), recursiveFunction(word, '', score))  : 
              Math.min(recursiveFunction(word, subString, score), recursiveFunction(word, '', score + subString.length))
        }
    }
    return recursiveFunction(s, '', 0)
};
// const minExtraChar = (s, dictionary) => {
//     dictionary = dictionary.filter(word => s.includes(word))
//     let ans = s.length
//     const recursiveFunction = (word) => {
//         let wordFound = false
//         for (let i = 0; i < dictionary.length; i++) {
//             if (word.includes(dictionary[i])) {
//                 recursiveFunction(word.replace(dictionary[i], '-'))
//                 wordFound = true
//             } else {
//                 dictionary.splice(i, 0)
//             }
//             if (wordFound === false) {
//                 ans = Math.min(ans, word.replaceAll('-','').length)
//             }
//         }
//     }
//     recursiveFunction(s)
//     console.log(dictionary)
//     return ans