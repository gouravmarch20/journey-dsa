v;
var nextGreaterElement = function (nums1, nums2) {
  let stack = [];
  let map = {};
  let n = nums2.length - 1;
  map[nums2[n]] = -1;
  stack.push(nums2[n]);
  //
  for (let i = n - 1; i >= 0; i--) {
    let curr = nums2[i];
    let stackT = stack[stack.length - 1];

    console.log("debug__", curr, stackT, stack);

    if (curr <= stackT) {
      map[curr] = stackT;
      stack.push(curr);
    } else {
      while (stack.length && curr > stackT) {
        // if(stack.length){
        // stackT = stack[stack.length - 1]
        //    stackT =           stack.pop()
        // !m3 :pop first then stack top

        stack.pop();
        //  if(stack.length ){
        stackT = stack[stack.length - 1];
        console.log("it_u", stackT);
        //  }
        // }
      }
      if (stack.length) {
        map[curr] = stackT;
      } else {
        map[curr] = -1;
      }
      stack.push(curr);
    }
  }
  console.log("debug_", map);
  let res = [];
  for (let num1 of nums1) {
    res.push(map[num1]);
  }
  return res;
};
