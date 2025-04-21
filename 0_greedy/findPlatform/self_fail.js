class Solution {
  cleanExpiredTrains(putTrain, currentArrival) {
    // Remove all trains that have departed before current train's arrival
    for (let i = putTrain.length - 1; i >= 0; i--) {
      if (putTrain[i][1] <= currentArrival) {
        putTrain.splice(i, 1);
      }
    }
  }

  findPlatform(Arrival, Departure) {
    //your code goes here
    const arivalDep = [];
    let putTrain = [];
    let maxPlatform = 0;
    //
    for (let i = 0; i < Arrival.length; i++) {
      arivalDep.push([Arrival[i], Departure[i]]);
    }
    //
    for (let i = 0; i < arivalDep.length; i++) {
      const train = arivalDep[i];

      // ❗️ Clean up all departed trains before assigning a new one
      this.cleanExpiredTrains(putTrain, train[0]);

      // Assign the current train to a platform
      putTrain.push(train);

      // Track the max number of platforms in use
      maxPlatform = Math.max(maxPlatform, putTrain.length);
    }

    return maxPlatform;
  }
}
