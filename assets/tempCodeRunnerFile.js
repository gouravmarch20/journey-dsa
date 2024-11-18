  if (i < can.length && can[i] === can[i + 1]) {
    while (i < can.length && can[i + 1] === can[i]) {
      i++;
    }
  }

  