#include <iostream>

using namespace std;

class Parent{
    public:
        void parentFunction(){ 
            cout << "This is a parent class\n";
        }
};      

class Child: public Parent{

};

class GrandChild: public Child{

};

int main(){

    GrandChild myGCObj;
    myGCObj.parentFunction();

}