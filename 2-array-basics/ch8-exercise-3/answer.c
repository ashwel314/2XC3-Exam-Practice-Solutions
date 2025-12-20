#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Write a declaration of an array named weekend containing seven bool values. Include an
// initializer that makes the first and last values true; all other values should be false.

void main(){
    //there's a few different ways to do this so I'll try and show some of them

    //1. using a for loop
    bool weekend1[7];
    for (int i = 0; i<7; i++){
        if(i == 0 || i == 6){// making the first or last values true
            weekend1[i] = true;
        } else{
            weekend1[i] = false;
        }
    }

    //2. using  array initalizer
    bool weekend2[] = {true, false, false, false, false, false, true};
    
    //3. using designated initalizer (not reccomended for this as it's long and doesn't need to be this long)
    bool weekend3[7] = {[0]=true, [1]=false, [2]=false, [3]=false, [4]=false, [5]=false, [6]=true};
}