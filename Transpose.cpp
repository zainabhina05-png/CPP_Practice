

// // // // //Write a C++ program to:Create a 2D array of size m×nm \times nm×n.Fill the array with user input.Generate the transpose of the matrix (i.e., swap rows and columns).Display both the original and transposed matrices.
#include<iostream>
using namespace std;
int main() {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;

    int arr[10][10], transpose[10][10];

    cout << "Enter matrix elements:\n";
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin >> arr[i][j];

   
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            transpose[j][i] = arr[i][j];

    cout << "Original matrix:\n";
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    cout << "Transposed matrix:\n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++)
            cout << transpose[i][j] << " ";
        cout << endl;
    }

    return 0;
}
