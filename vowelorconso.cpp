#include <iostream>
using namespace std;

int main(){
    char c;

    cout<<endl<<"enter the character:";
    cin>>c;

     if (c == 'a' || c == 'e' || c == 'i' ||
   c == 'o' || c == 'u' || c == 'A' ||
   c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        cout<<endl<<"c is vowel"<<" "<<c;
    }
    else {
        cout<<endl<<" is consonant"<<c;
    }
}
