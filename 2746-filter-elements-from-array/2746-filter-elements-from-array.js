/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    const newArray = [];
    let index = 0;
    for(let i = 0; i < arr.length; i++){
        if(fn(arr[i],i)){
            newArray[index] = arr[i];
            index++;
        }
    }
    return newArray;
};