
/*
    Author: William Nwoke
    Program: if-else execution
    Last modified: August 19, 2021
*/

/*
    Description: Executing both If and Else statement.
    Goto statements make code hard to read and hard to debug.
*/

#include <iostream>

using namespace std;

int main(){
    if (1){
        label_1: cout << "Hello";
        // Jump to the else statement after 
        // executing the above statement
        goto label_2;
    }
    else{
        // Jump to 'if block statement' if
        // the boolean condition becomes false
        goto label_1;

        label_2: cout <<"Geeks";
    }

    return 0;
}

// This code is contrbuted by shivanisinghss2110 on geeks for geeks.