/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function (s) {
    return s
        .trim()
        .split(" ")
        .map((s) => s.split("").reverse().join(""))
        .join(" ");
};
