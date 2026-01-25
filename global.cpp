#include<iostream>
using namespace std;

int x=10;//a global variable .//global variable have default value 0
extern int y; //extern is used if value of global variable declared after the function using it
int main(){
    cout <<x << "\n";
    cout <<y <<"\n";
    return 0;
}
int y=20; //declaring the value 

//scope--- 

// int a=10;
// int something()
// {
//     int a=30; 
//     {
//         int a=40;
//         cout<<a <<"\n";
//         return 0;
//     }
    
// }
