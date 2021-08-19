
/*
    Author: William Nwoke
    Program: Namespace in C++
    Last modified: August 19, 2021
*/

/*
    Description: Classes and Namespace. Using namespace to create two variables with the same name. 
    Using a new namespace declared and defined in another file
*/

#include <iostream>
#include "namespace4.h"

using namespace std;

int main(){
    ns::geek Obj;
    Obj.display();
    ns::display();
    return 0;
}

