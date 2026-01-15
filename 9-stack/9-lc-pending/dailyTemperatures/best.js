/**
 * @param {number[]} temperatures
 * @return {number[]}
 */
var dailyTemperatures = function(temperatures)
{
    let n = temperatures.length;
    let result = Array.from({length : n}).fill(0);
    let stack = [];
    stack.push(n - 1);
    for (let i = n - 1; i >= 0; i--)
    {
        let top = stack[stack.length - 1];
        // !m1:: equal case need --> need next greater only 
        while (!isNaN(top) && stack.length && temperatures[i] >= temperatures[top])
        {

            stack.pop();
            top = stack[stack.length - 1];
        }
        if (stack.length == 0)
        {
            result[i] = 0;
        }
        else
        {
            result[i] = top - i;
        }
        stack.push(i)
    }

    return result;
};