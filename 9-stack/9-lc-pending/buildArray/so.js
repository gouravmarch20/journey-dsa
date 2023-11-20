// var buildArray = function (target_sorted, N) {
//     let an = [];
  
//     let stack = new Stack()
//     let t = 0;
//     for (let n = 1; n <= N && t < target_sorted.length; n++) {
//       stack.push(n) // assume we need
//       an.push("Push")
  
//       if (stack.top === target_sorted[t]) {
//         // matches, we need
//         t++; // go to next target
//       } else {
//         // we dont need, remove
//         stack.pop()
//         an.push("Pop");
//       }
//     }
//     return an;
//   };
  
//   function Stack() {
//     let stack = []
  
//     this.print = () => {
//       console.log(stack)
//     }
//     this.push = (e) => stack.push(e)
//     this.pop = () => stack.pop()
//     this.empty = () => !stack.length
//     this.items = () => stack
//     // this.isEmpty = this.empty
//     // this.peek = () => stack[stack.length - 1]
  
//     Object.defineProperties(this, {
//       top: {
//         get: function () {
//           return stack[stack.length - 1]
//         },
//       },
//       items: {
//         get: function () {
//           return stack
//         },
//       },
//       size: {
//         get: function () {
//           return stack.length
//         },
//       },
//     })
  
//     this.test = () => {
//       let stack = new Stack()
//       stack.push()
//       while (!stack.empty()) {
//         let x = stack.top
//         stack.peek()
//         stack.pop()
//       }
//     }
//   }
  