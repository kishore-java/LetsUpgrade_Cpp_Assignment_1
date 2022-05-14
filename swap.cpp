#include<iostream>
using namespace std;

int main(){
    int a , b;
    cout<<endl<<"enter the value of a:";
    cin>>a;
    cout<<endl<<"enter the value of b:";
    cin>>b;

    a = a+b;
    b=a-b;
    a=a-b;

    cout<<endl<<"the value of a and b are:"<<a<<" "<<b;

}