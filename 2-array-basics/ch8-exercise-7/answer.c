#include <stdlib.h>
#include <stdio.h>

// Exercise 6:
// Calculators, watches, and other electronic devices often rely on seven-segment displays for
// numerical output. To form a digit, such devices “turn on” some of the seven segments while
// leaving others “off”:
//  _       _    _         _    _   _    _    _
// | |  |   _|   _|  |_|  |_   |_    |  |_|  |_|
// |_|  |  |_    _|    |   _|  |_|   |  |_|   _| 
// 
// Suppose that we want to set up an array that remembers which segments should be “on” for
// each digit. Let’s number the segments as follows:
// The top segment is 0, top right segment is 1, bottom right is 2, bottom is 3, bottom left is 4, top left is 5, middle is 6
// Here’s what the array might look like, with each row representing one digit:
// const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, …};
// I’ve given you the first row of the initializer; fill in the rest.

// Using the shortcuts described in Section 8.2, shrink the initializer for the segments array
// (Exercise 6) as much as you can.

int main(){
    /* From exercise 6:
    const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, // 0
                                 {0, 1, 1, 0, 0, 0, 0}, // 1
                                 {1, 1, 0, 1, 1, 0, 1}, // 2
                                 {1, 1, 1, 1, 0, 0, 1}, // 3
                                 {0, 1, 1, 0, 0, 1, 0}, // 4
                                 {1, 0, 1, 1, 0, 1, 1}, // 5
                                 {1, 0, 1, 1, 1, 1, 1}, // 6
                                 {1, 1, 1, 0, 0, 0, 0}, // 7
                                 {1, 1, 1, 1, 1, 1, 1}, // 8
                                 {1, 1, 1, 1, 0, 1, 1}} // 9 */
    
    // We can omit any trailing 0's from the initalizer as they'll be filled in
    const int segments[10][7] = {{1, 1, 1, 1, 1, 1},    //0
                                 {0, 1, 1},             //1
                                 {1, 1, 0, 1, 1, 0, 1}, //2
                                 {1, 1, 1, 1, 0, 0, 1}, //3
                                 {0, 1, 1, 0, 0, 1},    //4
                                 {1, 0, 1, 1, 0, 1, 1}, //5
                                 {1, 0, 1, 1, 1, 1, 1}, //6
                                 {1, 1, 1},             //7
                                 {1, 1, 1, 1, 1, 1, 1}, //8
                                 {1, 1, 1, 1, 0, 1, 1}}; //9
}