


// // // // //Write a C++ program to:
// // // // //  Create two 2D arrays of size m×nm \times nm×n with dimensions entered by 
// // // // // the user.
// // // // //  Fill both arrays with user input.
// // // // // 3. Add the corresponding elements of the two matrices and store the result in a 
// // // // // third matrix.
// // // // // 4. Display all three matrices in a proper matrix format
#include<iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;

    int a[10][10], b[10][10], sum[10][10];

    cout << "Enter first matrix:\n";
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin >> a[i][j];

    cout << "Enter second matrix:\n";
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin >> b[i][j];

    // Add matrices
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            sum[i][j] = a[i][j] + b[i][j];

    cout << "First matrix:\n";
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    cout << "Second matrix:\n";
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++)
            cout << b[i][j] << " ";
        cout << endl;
    }

    cout << "Sum matrix:\n";
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }

    return 0;
}