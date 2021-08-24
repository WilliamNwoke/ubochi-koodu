/*
    Author: Willim
    Program: Array rotations
    Last modified: August 24, 2021
*/

/*
    Description: A C++ program to rotate an array using A juggling alogorithm
*/

#include <bits/stdc++.h>
using namespace std;
/*Functions to get gcd of a and b */
int gcd(int a, int b)
{
    if (b ==0)
        return a;
    else
        return gcd(b, a%b);
}
/*Function to left rotate arr[] of size n by d*/
void leftRotate(int arr[], int d, int n)
{
    /*To handle if d >= n */
    d = d%n;
    int g_c_d = gcd(d,n);
    for (int i =0; i<g_c_d; i++){
        /*Move i-th values of blocks */
        int temp = arr[i];
        int j = i;
        while(1){
            int k = j+d;
            if (k >= n)
                k = k-n;
            if (k==1)
                break;
            arr[j] = arr[k];
            j =k;
        }
        arr[j] = temp;
    }
}

// Function to print an array
void printArray(int arr[], int size)
{
    for (int i=0; i< size; i++)
        cout << arr[i] << " ";
}
/* Driver program to test above functions */
int main(){
    int arr[]= {1,2,3,4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    // function calling
    leftRotate(arr,2,n);
    printArray(arr,n);
    
    return 0;
}