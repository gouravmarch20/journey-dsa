// Other similar practice problems (string / lexicographic constraints)

// 791. Custom Sort String – rearrange string based on order constraints.

// 1055. Shortest Way to Form String – build a string by embedding patterns.

// 1487. Making File Names Unique – generate lexicographically smallest valid result under constraints.
// Your current “pattern embedding with T/F constraints” problem is most similar conceptually to 922 + 1055 combined. You can try these first to get used to:

function generateStringBrute(S1, S2) {
    const L1 = S1.length;
    const L2 = S2.length;
    const L = L1 + L2 - 1;
    const S = Array(L).fill('?');
  
    // Step 1: place S1 at all 'T'
    for (let i = 0; i < L2; i++) {
      if (S2[i] === 'T') {
        for (let j = 0; j < L1; j++) {
          if (S[i + j] === '?' || S[i + j] === S1[j]) {
            S[i + j] = S1[j];
          } else {
            return "-1"; // conflict
          }
        }
      }
    }
  
    // Step 2: fill remaining '?' with 'A' (lex smallest)
    for (let i = 0; i < L; i++) {
      if (S[i] === '?') S[i] = 'A';
    }
  
    // Step 3: verify 'F' positions
    for (let i = 0; i < L2; i++) {
      if (S2[i] === 'F') {
        let substr = S.slice(i, i + L1).join('');
        if (substr === S1) return "-1"; // violated
      }
    }
  
    return S.join('');
  }
  
  // Test
  console.log(generateStringBrute("ABCA", "TFFF")); // ABCAAAA
  