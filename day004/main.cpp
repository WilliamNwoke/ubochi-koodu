
/*
    Author: William Nwoke
    Program: Namespace in C++
    Last modified: August 19, 2021
*/

/*
    Description: Classes and Namespace. Using namespace to create two variables with the same name. 
*/

#include <iostream>

using namespace std;

namespace ns {
    // A class in a namespace
    class geek{
        public:
            void display(){
                cout << "ns::geek::display()\n";
            }
    };
}

int main(){
    // Creating Object of geek class
    ns::geek obj;

    obj.display();

    return 0;
}