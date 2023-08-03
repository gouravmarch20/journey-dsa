function uniquePositions(moves, k) {
  // your code here
  let c = 0
  for (let i = 0; i < moves.length; i++) {
    if (moves[i] === "F") {
      c++
    } else {
      c--
    }
  }
  return c
}

uniquePositions