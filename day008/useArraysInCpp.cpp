#include <bits/stdc++.h>

using namespace std;

int main(){
    int perStudentPerCount[] ={0,1,0,2,1,1,4,0,0,0,3,2,1,3,0,2,2,4};

    int numberOfStudents = sizeof(perStudentPerCount)/sizeof(perStudentPerCount[0]);

    // sum of items / number of items

    cout << perStudentPerCount[3] << "\n";
    cout << numberOfStudents << "\n";

    int sum = 0;
    int individualPetCount = numberOfStudents;

    for (int i = 0; i < individualPetCount; i++) {
        sum = sum + perStudentPerCount[i];
    }

    cout << sum << "\n";
    int average = sum / numberOfStudents;

    cout << average << "\n";
}