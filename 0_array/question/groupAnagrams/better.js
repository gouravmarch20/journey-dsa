/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function (strs) {
  let map = {};
  let n = strs.length;
  for (let i = 0; i < n; i++) {
    const s = strs[i];
    const sortS = s.split("").sort().join("");
    if (map[sortS] != undefined) {
      map[sortS] = [...map[sortS], i];
    } else {
      map[sortS] = [i];
    }
  }
  let result = [];
  //   !m2 -> Object
  let m = Object.values(map);
  // console.log("k_" , m)
  for (v of m) {
    console.log("t", v);
    const temp = [];
    for (let i = 0; i < v.length; i++) {
      // !m1 -> strs[v[i]])
      temp.push(strs[v[i]]);
    }
    result.push(temp);
  }

  //
  return result;
  // console.log("th " , m)
};
