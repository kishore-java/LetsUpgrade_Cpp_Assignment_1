#include<iostream>
using namespace std;

int main(){
    float length,width;
    float P, A;

    cout<<endl<<"emter the length:";
    cin>>length;
    cout<<endl<<"emter the width:";
    cin>>width;
    A=length*width; 
    P=2*(length*width);

    cout<<"Arean and perimeter of rectangle are:"<<A<<" "<<P;

}