// // // // //Write a C++ program to:Create a square matrix of size n×nn \times nn×n (dimension entered by the user).Fill the matrix with user input.Calculate the sum of the main diagonal elements (top-left to bottom-right).Print the matrix and the diagonal sum.
#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    int arr[10][10];
    int diagonalSum = 0;
    
   

    cout << "Enter matrix elements:\n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin >> arr[i][j];
            if(i == j) {
                diagonalSum += arr[i][j];
            }
        }
    }

    cout << "Matrix:\n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    cout << "Sum of main diagonal elements: " << diagonalSum << endl;

    return 0;
}