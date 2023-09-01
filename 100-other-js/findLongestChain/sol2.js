var findLongestChain = function (a) {
    a.sort((a, b) => a[1] - b[1]);
    let c, eprev;
    for (let [s, e] of a)
        if (eprev === undefined) {
            eprev = a[0][1];
            c = 1;
        } else if (s > eprev) {
            eprev = e;
            c++;
        }
    return c;
};
