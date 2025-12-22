#include <stdlib.h>
#include <stdio.h>

// Write the following functions. (The color structure is defined in Exercise 8.)

// From exercise 8
struct color {
    int red;
    int green;
    int blue;
};

/*(a) struct color make_color(int red, int green, int blue);
Returns a color structure containing the specified red, green, and blue values. If any argu
ment is less than zero, the corresponding member of the structure will contain zero instead.
If any argument is greater than 255, the corresponding member of the structure will contain
255.*/
struct color make_color(int red, int green, int blue){
    // defining the struct
    struct color {
        int red;
        int green;
        int blue;
    } c;

    // ensuring the int value is within range
    if(red < 0){
        c.red = 0;
    } else if (red > 255){
        c.red = 255
    } else{
        c.red = red;
    }
    
    if(green < 0){
        c.green = 0;
    } else if (green > 255){
        c.green = 255
    } else{
        c.green = green;
    }
    
    if(blue < 0){
        c.blue = 0;
    } else if(blue > 255){
        c.blue = 255
    } else {
        c.blue = blue;
    }
    
    return c;
}

/*(b) int getRed(struct color c);
Returns the value of c’s red member.*/
int getRed(struct color c){
    return c.red;
}

/*(c) bool equal_color(struct color color1, struct color color2);
Returns true if the corresponding members of color1 and color2 are equal.*/
bool equal_color(struct color color1, struct color color2){
    // comparing all the colors 
    if(color1.red == color2.red && color1.green == color2.green && color1.blue == color2.blue){
        return true;
    } else {
        return false;
    }
}

/*(d) struct color brighter(struct color c);
Returns a color structure that represents a brighter version of the color c. The structure is
identical to c, except that each member has been divided by 0.7 (with the result truncated to
an integer). However, there are three special cases: (1) If all members of c are zero, the
function returns a color whose members all have the value 3. (2) If any member of c is
greater than 0 but less than 3, it is replaced by 3 before the division by 0.7. (3) If dividing by
0.7 causes a member to exceed 255, it is reduced to 255.*/
struct color brighter(struct color c){
    //defining the new struct
    struct color {
        int red;
        int green;
        int blue;
    } result;
    result = c; // making the new struct the same as c
    if(c.red = 0 && c.green == 0 && c.blue == 0){ // special case 1
        result.red = 3;
        result.green = 3;
        result.blue = 3;
        return result;
    }

    //special case 2
    if(c.red > 0 && c.red < 3){
        result.red = 3;
    }
    if(c.green > 0 && c.green < 3){
        result.green = 3;
    }
    if(c.blue > 0 && c.blue < 3){
        result.blue = 3;
    }

    result.red = result.red/0.7;
    result.green = result.green/0.7;
    result.blue = result.blue/0.7;

    //special case 3
    if(result.red > 255){
        result.red = 255;
    }
    if(result.green > 255){
        result.green = 255;
    }
    if(result.blue > 255){
        result.blue = 255;
    }
    return result;
} 

/*(e) struct color darker(struct color c);
Returns a color structure that represents a darker version of the color c. The structure is
identical to c, except that each member has been multiplied by 0.7 (with the result truncated
to an integer).*/
struct color darker(struct color c){
    //defining the new struct
    struct color {
        int red;
        int green;
        int blue;
    } result;
    // making it darker
    result.red = c.red*0.7;
    result.green = c.green*0.7;
    result.blue = c.blue*0.7;
    return result; 
}
