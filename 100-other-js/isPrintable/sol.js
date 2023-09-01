// var isPrintable = function (g) {
//     const m = g.length
//     const n = g[0].length
  
//     // Separate arrays to store rows and columns of each color
//     const colorRows = Array.from({ length: 66 }, () => [])
//     const colorCols = Array.from({ length: 66 }, () => [])
  
//     // Populate colorRows and colorCols
//     for (let R = 0; R < m; ++R) {
//       for (let C = 0; C < n; ++C) {
//         const color = g[R][C]
//         colorRows[color].push(R)
//         colorCols[color].push(C)
//       }
//     }
  
//     // Sort rows and columns for each color
//     for (let color = 1; color <= 60; ++color) {
//       colorRows[color].sort((a, b) => a - b)
//       colorCols[color].sort((a, b) => a - b)
//     }
  
//     // Iteratively remove valid colors
//     while (true) {
//       let changesMade = false
//       for (let color = 1; color <= 60; ++color) {
//         if (colorRows[color].length === 0) {
//           continue
//         }
//         const firstRow = colorRows[color][0]
//         const lastRow = colorRows[color][colorRows[color].length - 1]
//         const firstCol = colorCols[color][0]
//         const lastCol = colorCols[color][colorCols[color].length - 1]
//         let isValidColor = true
//         for (let R = firstRow; R <= lastRow; ++R) {
//           for (let C = firstCol; C <= lastCol; ++C) {
//             if (g[R][C] !== 0 && g[R][C] !== color) {
//               isValidColor = false
//               break
//             }
//           }
//         }
//         if (isValidColor) {
//           changesMade = true
//           // Set cells to 0 and clear color rows and columns
//           for (let R = firstRow; R <= lastRow; ++R) {
//             for (let C = firstCol; C <= lastCol; ++C) {
//               g[R][C] = 0
//             }
//           }
//           colorRows[color] = []
//           colorCols[color] = []
//         }
//       }
//       if (!changesMade) {
//         break
//       }
//     }
  
//     // Check if any non-zero cells remain
//     for (let R = 0; R < m; ++R) {
//       for (let C = 0; C < n; ++C) {
//         if (g[R][C]) {
//           return false
//         }
//       }
//     }
  
//     return true
//   }
  
//   // ==================================
  
//   var isPrintable = function (g) {
//     // Class to represent a colored area
//     class Area {
//       constructor(color) {
//         this.color = color
//         this.topLeft = []
//         this.bottomRight = []
//       }
  
//       add(R, C) {
//         const { topLeft, bottomRight } = this
  
//         // If the area is empty, set its boundaries
//         if (topLeft.length === 0) {
//           topLeft[0] = bottomRight[0] = R
//           topLeft[1] = bottomRight[1] = C
//         } else {
//           // Expand the boundaries if needed
//           topLeft[0] = Math.min(topLeft[0], R)
//           topLeft[1] = Math.min(topLeft[1], C)
//           bottomRight[0] = Math.max(bottomRight[0], R)
//           bottomRight[1] = Math.max(bottomRight[1], C)
//         }
//       }
  
//       // Get colors covered by the area
//       getCoveredColor() {
//         const set = new Set()
//         const [x1, y1] = this.topLeft
//         const [x2, y2] = this.bottomRight
  
//         // Iterate through the area and add colors to the set
//         for (let R = x1; R <= x2; R++) {
//           for (let C = y1; C <= y2; C++) {
//             set.add(g[R][C])
//           }
//         }
  
//         // Remove the current area's color
//         set.delete(this.color)
//         return [...set]
//       }
//     }
  
//     // Array to store covered colors
//     const cover = Array.from({ length: 61 }, () => [])
  
//     // Array to store areas
//     const areas = []
  
//     const m = g.length
//     const n = g[0].length
  
//     // Identify areas for each color
//     for (let R = 0; R < m; R++) {
//       for (let C = 0; C < n; C++) {
//         const color = g[R][C]
//         if (!areas[color]) areas[color] = new Area(color)
//         areas[color].add(R, C)
//       }
//     }
  
//     // Populate covered colors
//     for (let R = 0; R < areas.length; R++) {
//       if (areas[R]) {
//         cover[R] = areas[R].getCoveredColor()
//       }
//     }
  
//     // Check for cycle using DFS
//     function hasCycle(at, path = new Set(), vis = new Set()) {
//       if (path.has(at)) return true
//       if (vis.has(at)) return false
  
//       vis.add(at)
//       path.add(at)
  
//       // Recursively check covered colors
//       for (const next of cover[at]) {
//         if (hasCycle(next, path, vis)) return true
//       }
  
//       path.delete(at)
//       return false
//     }
  
//     // Check for cycles in each covered color set
//     const vis = new Set()
//     for (let R = 0; R < cover.length; R++) {
//       if (hasCycle(R, new Set(), vis)) return false
//     }
  
//     return true
//   }
  
//   // =============================
  
//   var isPrintable = function (grid) {
//     const adjacentColors = new Array(65).fill(null).map(() => [])
//     const degree = new Array(65).fill(0)
  
//     // Calculate adjacent colors for each color
//     for (let color = 1; color <= 60; color++) {
//       let maxX = 0
//       let minX = 60
//       let maxY = 0
//       let minY = 60
  
//       // Find the boundaries for the current color
//       for (let R = 0; R < grid.length; R++) {
//         for (let C = 0; C < grid[0].length; C++) {
//           if (grid[R][C] === color) {
//             maxX = Math.max(maxX, R)
//             minX = Math.min(minX, R)
//             maxY = Math.max(maxY, C)
//             minY = Math.min(minY, C)
//           }
//         }
//       }
  
//       // Collect adjacent colors within the boundaries
//       for (let R = minX; R <= maxX; R++) {
//         for (let C = minY; C <= maxY; C++) {
//           if (grid[R][C] !== color) {
//             adjacentColors[color].push(grid[R][C])
//             degree[grid[R][C]]++
//           }
//         }
//       }
//     }
  
//     const queue = []
//     for (let color = 1; color <= 60; color++) {
//       if (degree[color] === 0) {
//         queue.push(color)
//       }
//     }
  
//     let visitedCount = 0
//     while (queue.length > 0) {
//       const currentColor = queue.shift()
//       visitedCount++
  
//       // Update degrees and enqueue adjacent colors
//       for (const adjColor of adjacentColors[currentColor]) {
//         if (--degree[adjColor] === 0) {
//           queue.push(adjColor)
//         }
//       }
//     }
  
//     return visitedCount === 60
//   }var isPrintable = function (g) {
//   const m = g.length
//   const n = g[0].length

//   // Separate arrays to store rows and columns of each color
//   const colorRows = Array.from({ length: 66 }, () => [])
//   const colorCols = Array.from({ length: 66 }, () => [])

//   // Populate colorRows and colorCols
//   for (let R = 0; R < m; ++R) {
//     for (let C = 0; C < n; ++C) {
//       const color = g[R][C]
//       colorRows[color].push(R)
//       colorCols[color].push(C)
//     }
//   }

//   // Sort rows and columns for each color
//   for (let color = 1; color <= 60; ++color) {
//     colorRows[color].sort((a, b) => a - b)
//     colorCols[color].sort((a, b) => a - b)
//   }

//   // Iteratively remove valid colors
//   while (true) {
//     let changesMade = false
//     for (let color = 1; color <= 60; ++color) {
//       if (colorRows[color].length === 0) {
//         continue
//       }
//       const firstRow = colorRows[color][0]
//       const lastRow = colorRows[color][colorRows[color].length - 1]
//       const firstCol = colorCols[color][0]
//       const lastCol = colorCols[color][colorCols[color].length - 1]
//       let isValidColor = true
//       for (let R = firstRow; R <= lastRow; ++R) {
//         for (let C = firstCol; C <= lastCol; ++C) {
//           if (g[R][C] !== 0 && g[R][C] !== color) {
//             isValidColor = false
//             break
//           }
//         }
//       }
//       if (isValidColor) {
//         changesMade = true
//         // Set cells to 0 and clear color rows and columns
//         for (let R = firstRow; R <= lastRow; ++R) {
//           for (let C = firstCol; C <= lastCol; ++C) {
//             g[R][C] = 0
//           }
//         }
//         colorRows[color] = []
//         colorCols[color] = []
//       }
//     }
//     if (!changesMade) {
//       break
//     }
//   }

//   // Check if any non-zero cells remain
//   for (let R = 0; R < m; ++R) {
//     for (let C = 0; C < n; ++C) {
//       if (g[R][C]) {
//         return false
//       }
//     }
//   }

//   return true
// }

// // ==================================

// var isPrintable = function (g) {
//   // Class to represent a colored area
//   class Area {
//     constructor(color) {
//       this.color = color
//       this.topLeft = []
//       this.bottomRight = []
//     }

//     add(R, C) {
//       const { topLeft, bottomRight } = this

//       // If the area is empty, set its boundaries
//       if (topLeft.length === 0) {
//         topLeft[0] = bottomRight[0] = R
//         topLeft[1] = bottomRight[1] = C
//       } else {
//         // Expand the boundaries if needed
//         topLeft[0] = Math.min(topLeft[0], R)
//         topLeft[1] = Math.min(topLeft[1], C)
//         bottomRight[0] = Math.max(bottomRight[0], R)
//         bottomRight[1] = Math.max(bottomRight[1], C)
//       }
//     }

//     // Get colors covered by the area
//     getCoveredColor() {
//       const set = new Set()
//       const [x1, y1] = this.topLeft
//       const [x2, y2] = this.bottomRight

//       // Iterate through the area and add colors to the set
//       for (let R = x1; R <= x2; R++) {
//         for (let C = y1; C <= y2; C++) {
//           set.add(g[R][C])
//         }
//       }

//       // Remove the current area's color
//       set.delete(this.color)
//       return [...set]
//     }
//   }

//   // Array to store covered colors
//   const cover = Array.from({ length: 61 }, () => [])

//   // Array to store areas
//   const areas = []

//   const m = g.length
//   const n = g[0].length

//   // Identify areas for each color
//   for (let R = 0; R < m; R++) {
//     for (let C = 0; C < n; C++) {
//       const color = g[R][C]
//       if (!areas[color]) areas[color] = new Area(color)
//       areas[color].add(R, C)
//     }
//   }

//   // Populate covered colors
//   for (let R = 0; R < areas.length; R++) {
//     if (areas[R]) {
//       cover[R] = areas[R].getCoveredColor()
//     }
//   }

//   // Check for cycle using DFS
//   function hasCycle(at, path = new Set(), vis = new Set()) {
//     if (path.has(at)) return true
//     if (vis.has(at)) return false

//     vis.add(at)
//     path.add(at)

//     // Recursively check covered colors
//     for (const next of cover[at]) {
//       if (hasCycle(next, path, vis)) return true
//     }

//     path.delete(at)
//     return false
//   }

//   // Check for cycles in each covered color set
//   const vis = new Set()
//   for (let R = 0; R < cover.length; R++) {
//     if (hasCycle(R, new Set(), vis)) return false
//   }

//   return true
// }

// // =============================

// var isPrintable = function (grid) {
//   const adjacentColors = new Array(65).fill(null).map(() => [])
//   const degree = new Array(65).fill(0)

//   // Calculate adjacent colors for each color
//   for (let color = 1; color <= 60; color++) {
//     let maxX = 0
//     let minX = 60
//     let maxY = 0
//     let minY = 60

//     // Find the boundaries for the current color
//     for (let R = 0; R < grid.length; R++) {
//       for (let C = 0; C < grid[0].length; C++) {
//         if (grid[R][C] === color) {
//           maxX = Math.max(maxX, R)
//           minX = Math.min(minX, R)
//           maxY = Math.max(maxY, C)
//           minY = Math.min(minY, C)
//         }
//       }
//     }

//     // Collect adjacent colors within the boundaries
//     for (let R = minX; R <= maxX; R++) {
//       for (let C = minY; C <= maxY; C++) {
//         if (grid[R][C] !== color) {
//           adjacentColors[color].push(grid[R][C])
//           degree[grid[R][C]]++
//         }
//       }
//     }
//   }

//   const queue = []
//   for (let color = 1; color <= 60; color++) {
//     if (degree[color] === 0) {
//       queue.push(color)
//     }
//   }

//   let visitedCount = 0
//   while (queue.length > 0) {
//     const currentColor = queue.shift()
//     visitedCount++

//     // Update degrees and enqueue adjacent colors
//     for (const adjColor of adjacentColors[currentColor]) {
//       if (--degree[adjColor] === 0) {
//         queue.push(adjColor)
//       }
//     }
//   }

//   return visitedCount === 60
// }