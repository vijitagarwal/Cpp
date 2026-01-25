#include<iostream>
#include<typeinfo>

using namespace std;

int main() 
{
    auto a=20; //declares data type on it's on
    auto b=3.13;
    auto c="hello";

    cout<<typeid(b).name()<<"\n";
    cout<<typeid(a).name()<<"\n";
}