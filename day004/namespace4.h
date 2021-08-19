// Declering Namespace
#include <iostream>

namespace ns{
    void display();
    class geek;
}

void ns::display(){
    std::cout << "ns::display()\n";
}

class ns::geek{
    public:
        void display(){
            std::cout << "ns::geek::display\n";
        }
};