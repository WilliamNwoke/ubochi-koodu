#include <bits/stdc++.h>

using namespace std;

int main(){
    string dinnerChoices[3][3] = {
        {"Salad", "Soup", "Cheese Plate"},
        {"Chicken", "Salmon", "Lasagna"}
        };
    
    int appIndex = 0;
    int mainDishIndex = 1;

    auto firstApp = dinnerChoices[appIndex][0];
    auto secondApp = dinnerChoices[appIndex][1];
    auto thirdMainDish = dinnerChoices[mainDishIndex][2];

    cout << firstApp << "\n";
    cout << secondApp << "\n";
    cout << thirdMainDish << "\n";

    dinnerChoices[mainDishIndex][0] = "Steak";
    cout << dinnerChoices[mainDishIndex][0] << "\n";

    // Line to print array, instead of memory address
    cout << dinnerChoices << "\n";
}