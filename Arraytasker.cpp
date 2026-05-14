#include<iostream>
using namespace std;
// // // // //Write a single program that combines all the above tasks. Implement the following:Declare an array and initialize it. Pass the array to a function element by element to calculate and display squares Pass the array as a whole to find its sum using function overloading.Overload another function to calculate the average of three user-provided numbers

void squareElements(int arr[], int n) {
    cout << "Squares of array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] * arr[i] << " ";
    }
    cout << endl;
}
int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
