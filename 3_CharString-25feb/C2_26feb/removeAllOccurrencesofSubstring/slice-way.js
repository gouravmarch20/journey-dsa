function removeOccurrences(s, part) {
    let pos = s.indexOf(part);
    while (pos !== -1) {
        s = s.slice(0, pos) + s.slice(pos + part.length);
        pos = s.indexOf(part);
    }
    return s;
}

let ans = "daabcbaabcbc";
let part = "abc";
console.log(removeOccurrences(ans, part));
