// // // // // //Count the element of any character array
#include<iostream>
#include<string>
using namespace std;
int main() {
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    int count=0;
    for(int i=0;i<str.length();i++){
        count++;
    }
    cout<<"The number of characters in the string is: "<<count<<endl;
    return 0;
}


