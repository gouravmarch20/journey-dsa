var groupAnagrams = function (strs) {
    const map = {};
  
    for (const str of strs) {
      const key = str.split("").sort().join(""); // canonical form
      if (!map[key]) {
        map[key] = [];
      }
      map[key].push(str); // store string directly
    }
  
    return Object.values(map);
  };
  