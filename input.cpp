#include<iostream>
using namespace std;
int main() {
    string name;
    cout<<"enter your name: \n";
    cin>>name;
    cout<<"your name is "<<name << endl;
    cout<< "enter 2 variables"<<endl;
    int x,y;
    cin>>x>>y;
    cout<<"first variable is "<<x <<" second variable is "<<y <<endl;
cin.ignore(); // to ignore the newline character left in the buffer
    string full_name;
    cout<<"enter your full name: \n";
    getline(cin,full_name);
    cout<<"your full name is: "<<full_name;

}