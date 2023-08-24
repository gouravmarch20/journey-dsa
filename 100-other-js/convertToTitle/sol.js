/**
 * @param {number} columnNumber
 * @return {string}
 */
var convertToTitle = function(columnNumber) {
    let letters = []
    while (columnNumber > 26) {
        let letterNumber = columnNumber % 26
        columnNumber = Math.floor(columnNumber/26)
        letters.unshift(letterNumber)
    }
    letters.unshift(columnNumber)
    for (let i = 0; i < letters.length; i++) {
        letters.forEach((letter,index)=> {
            if (letter === 0 && index !== 0) {
                letters[index-1]--
                letters[index] = 26
            }
        })
    }
    const getLetterForNumber = (number) => {
        switch (number) {
            case 1:
            return "A"
            case 2:
            return "B"
            case 3:
            return "C"
            case 4:
            return "D"
            case 5:
            return "E"
            case 6:
            return "F"
            case 7:
            return "G"
            case 8:
            return "H"
            case 9:
            return "I"
            case 10:
            return "J"
            case 11:
            return "K"
            case 12:
            return "L"
            case 13:
            return "M"
            case 14:
            return "N"
            case 15:
            return "O"
            case 16:
            return "P"
            case 17:
            return "Q"
            case 18:
            return "R"
            case 19:
            return "S"
            case 20:
            return "T"
            case 21:
            return "U"
            case 22:
            return "V"
            case 23:
            return "W"
            case 24:
            return "X"
            case 25:
            return "Y"
            case 26:
            return "Z"
        }
    }
    letters = letters.map(num => getLetterForNumber(num))
    return letters.join("")
}