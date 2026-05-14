



// // // // //Input your name and display it in reverse order
#include<iostream>
#include<string>
using namespace std;
int main() {
    string name;
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"Your name in reverse order is: ";
    for(int i=name.length()-1;i>=0;i--){
        cout<<name[i];
    }
    cout<<endl;
    return 0;
}   
