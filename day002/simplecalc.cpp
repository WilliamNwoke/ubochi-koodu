/*
    Author: William Nwoke
    Program: Simple calculator in C++
    Last Modified: August 13, 2021
*/

#include <iostream>
#include <string>

using namespace std;

double addition(double a, double b);
double subtraction(double a, double b);
double multiplication(double a, double b);
double division(double a, double b);
int moduluss(int a, int b);


int main(){

    double firstNum;
    double secondNum;
    string fullName;
    int option;

    cout << "what is your name? ";
    cin >> fullName;
    cout << "Hello, " << fullName << endl;

    cout << "choose from option 1-5: \nPlease select an option using the numbers attached to it \n";
    cout << "1. Addition. \n2. Subtraction. \n3. Multiplication. \n4. Division. \n5. Modulus. \n";
    cin >> option;
    if (option == 1){
        cout << "Enter first number: \n";
        cin >> firstNum;
        cout << "Enter second number: \n";
        cin >> secondNum;
        cout << addition(firstNum,secondNum) << endl;
    }else if (option == 2)
    {
        cout << "Enter first number: \n";
        cin >> firstNum;
        cout << "Enter second number: \n";
        cin >> secondNum;
        cout << subtraction(firstNum,secondNum)<< endl ;
    }else if (option == 3)
    {
        cout << "Enter first number: \n";
        cin >> firstNum;
        cout << "Enter second number: \n";
        cin >> secondNum;
        cout << multiplication(firstNum, secondNum) << endl;
    }else if (option == 4)
    {
        cout << "Enter first number: \n";
        cin >> firstNum;
        cout << "Enter second number: \n";
        cin >> secondNum;
        cout << division(firstNum, secondNum) << endl;
    }else if (option == 5)
    {
        cout << "Enter first number: \n";
        cin >> firstNum;
        cout << "Enter second number: \n";
        cin >> secondNum;
        int a = int (firstNum);
        int b = int (secondNum);
        cout << moduluss(a,b) << endl;
    }else{
        cout << "invalid input\n";
    }
}

double addition(double a, double b){ 
    return a + b;
}

double subtraction(double a, double b){
    return a - b;
}
double multiplication(double a, double b){
    return a * b;
}
double division(double a, double b){
    return a / b;
}

int moduluss(int a, int b){
    // This function returns the modulus
    return a % b;
}

