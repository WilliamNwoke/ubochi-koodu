
/*
    Author: William Nwoke
    Program: Namespace in C++
    Last modified: August 19, 2021
*/

/*
    Description: Classes and Namespace. Using namespace to create two variables with the same name.
*/

// Defining classes and methods outside the namespace

#include <iostream>

using namespace std;

// Creating a namespace
namespace ns{
    void display();
    class geek{
        public:
            void display();
    };
}

//Defining methods of namespace
void ns::geek::display(){
    cout << "ns::geek::display()\n";
}

void ns::display(){
    cout << "ns::display()";
}

int main(){
    ns::geek obj;
    obj.display();
    ns::display();
    return 0;
}


