/**
 * No sorting, brute-force match.
 * For each child, find a suitable cookie and mark it as used (-1).
 *
 * @param {number[]} g
 * @param {number[]} s
 * @return {number}
 */
var findContentChildren = function(g, s) {
    let count = 0;

    for (let i = 0; i < g.length; i++) {
        let minIndex = -1;
        let minSize = Infinity;

        for (let j = 0; j < s.length; j++) {
            if (s[j] >= g[i] && s[j] < minSize) {
                minSize = s[j];
                minIndex = j;
            }
        }

        if (minIndex !== -1) {
            count++;
            s[minIndex] = -1; // Mark cookie as used
        }
    }

    return count;
};
