/**
 * @param {string[]} words
 * @param {number} maxWidth
 * @return {string[]}
 */
var fullJustify = function(words, maxWidth) {
    const lines = [[]]
    const answer = []
    let currentLineLength = -1
    for (const word of words) {
        if (currentLineLength + word.length + 1 <= maxWidth) {
            lines[lines.length - 1].push(word)
            currentLineLength += (word.length + 1)
        } else {
            lines.push([word])
            currentLineLength = word.length
        }
    }
    for (let i = 0; i < lines.length; i++) {
        let line = lines[i]
        let lineString = ''
        if (i === lines.length - 1) {
            for (let j = 0; j < line.length; j++) {
                let word = line[j]
                lineString += word + ' '            
            }
            lineString = lineString.trim()
            lineString = lineString.padEnd(maxWidth, ' ')
            answer.push(lineString)
            continue
        }

        const lineLength = line.reduce((a,word) => a + word.length, 0)
        let numberOfSpaces = maxWidth - lineLength
        for (let j = 0; j < line.length; j++) {
            let word = line[j]
            const spacesToAdd = Math.ceil(numberOfSpaces / (line.length - 1 - j))
            numberOfSpaces -= spacesToAdd
            lineString += word
            if (j < line.length - 1) lineString += ' '.repeat(spacesToAdd)
        }
        lineString = lineString.padEnd(maxWidth,' ')
        answer.push(lineString)
    }
    
    return answer
};