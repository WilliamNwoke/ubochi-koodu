
/*
    Author: William Nwoke
    Program: Namespace in C++
    Last modified: August 19, 2021
*/

/*
   Class cab all be declared inside namesapce and defined outside namespace using the following syntax
*/

#include <iostream>

using namespace std;

namespace ns{
    class geek;
}

class ns::geek{
    public:
        void display(){
            cout << "ns::geek::display()\n";
        }
};

int main(){
    ns::geek obj;
    obj.display();

    return 0;
}