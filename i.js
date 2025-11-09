const sum = (n) => {
  if (n == 0) return 0;
  const add = n % 2 == 0 ? 0 : n;
  return add + sum(n - 1);
};

console.log(sum(5));
