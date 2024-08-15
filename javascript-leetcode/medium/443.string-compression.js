/*
 * @lc app=leetcode id=443 lang=javascript
 *
 * [443] String Compression
 */

// @lc code=start
/**
 * @param {character[]} chars
 * @return {number}
 */
var compress = function(chars) {
    if (chars.length === 1) return 1;
    
    let writeIndex = 0;
    let readIndex = 0;
    
    while (readIndex < chars.length) {
        let currentChar = chars[readIndex];
        let count = 0;
        
        // Count occurrences of the current character
        while (readIndex < chars.length && chars[readIndex] === currentChar) {
            readIndex++;
            count++;
        }
        
        // Write the character to the writeIndex position
        chars[writeIndex] = currentChar;
        writeIndex++;
        
        // If the count is greater than 1, write the count to the array
        if (count > 1) {
            let countStr = count.toString();
            for (let char of countStr) {
                chars[writeIndex] = char;
                writeIndex++;
            }
        }
    }
    
    // The new length of the compressed array
    return writeIndex;
    
};
// @lc code=end

