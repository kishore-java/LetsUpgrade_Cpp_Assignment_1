#include<iostream>
using namespace std;

int main(){
    int c,d,Rem,Quo;
    cout<<endl<<"enter value of c:";
    cin>>c;
    cout<<endl<<"enter value of d:";
    cin>>d;
    
    Rem= c % d;
    Quo= c / d;

    cout<<endl<<"Remainder is:"<<Rem;
    cout<<endl<<"Quotient is:"<<Quo;


}