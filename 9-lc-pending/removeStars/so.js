// var removeStars = function (s) {
//     let stack = new Stack()
//     for (let c of s) {
//       if (c === "*") {
//         stack.pop();
//       } else {
//         stack.push(c);
//       }
//     }
//     return stack.items.join("")
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
//       top1111: {
//         get: function () {
//           return this.peek()
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