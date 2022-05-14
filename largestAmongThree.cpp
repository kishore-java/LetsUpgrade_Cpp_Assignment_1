#include<iostream>
using namespace std;

int main() {

    int a , b , c , max;

    cout<<endl<<"entr valueof a:";
    cin>>a;
    cout<<endl<<"entr valueof b:";
    cin>>b;
    cout<<endl<<"entr valueof c:";
    cin>>c;

    max = a;
    if(b>a && b>c){
        max=b;
        cout<<endl<<"max is"<<b;
    }else if(c>a && c>b){
        max=c;
        cout<<endl<<"max is"<<c;
    }else{
        cout<<endl<<"max is"<<a;
    }
}

  

