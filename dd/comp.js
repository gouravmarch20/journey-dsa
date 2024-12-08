const array = ["6752ee83c6d492bee75a5d3d"];
const valueToFind = "dd";

const exists = array.find((item) => item === valueToFind) !== undefined;

console.log(exists); // true