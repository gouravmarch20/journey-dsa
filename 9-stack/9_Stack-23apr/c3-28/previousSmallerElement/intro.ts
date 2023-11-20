// * O(2n) -> O(n)
// each operation in stack occur max twice -> //^ push , pop --> never again
//prev small --> stack storing prev small at top , if not found remove it form top , stop when found top smaller --> next item will accept top or go more down
//? eliminated by one further not be checked
//* O(n log n) => sort 