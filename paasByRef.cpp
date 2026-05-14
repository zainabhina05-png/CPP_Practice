// // // // //sum of array by function pass by refrence 
#include<iostream>
using namespace std;
void sumArray(int arr[], int &n, int &sum) {
    sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "Sum of array elements: " << sum << endl;
}
int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum;
    sumArray(arr, n, sum);
    return 0;
}