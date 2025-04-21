class Solution {
  isAnyEmptyPlatform(putTrain, arivalDep) {
    for (let i = 0; i < putTrain.length; i++) {
      if (putTrain[i][1] <= arivalDep[0]) {
        putTrain.splice(i, 1); // remove that platform
        return true;
      }
    }
    return false;
  }

  findPlatform(Arrival, Departure) {
    //your code goes here
    const arivalDep = [];
    let putTrain = [];
    for (let i = 0; i < Arrival.length; i++) {
      arivalDep.push([Arrival[i], Departure[i]]);
    }

    let maxPlatform = 0;
    for (let i = 0; i < arivalDep.length; i++) {
      if (putTrain?.length == 0) {
        putTrain.push(arivalDep[i]);
      } else if (this.isAnyEmptyPlatform(putTrain, arivalDep[i])) {
        putTrain.push(arivalDep[i]);
      } else {
        putTrain.push(arivalDep[i]);
      }
      maxPlatform = Math.max(maxPlatform, putTrain.length);
    }
    return maxPlatform;
  }
}
