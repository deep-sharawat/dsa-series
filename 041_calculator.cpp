#include <iostream>
using namespace std;
int main(){

    int a ,b;
    char c;
    cout<<"enter the value of a : ";
    cin>>a;

    cout<<"enter the value of b : ";
    cin>>b;

    cout<<"enter operation : ";
    cin>>c;

    switch (c){

        case '*': cout<<" mul is : "<<a*b;
            break;

        case '/': cout<<"div is : "<<a/b;
            break;

        case '+': cout<<"add is : "<<a+b;
            break;

        case '-': cout<<"sub is : "<<a-b;
            break;

        default: cout<<"enter valid operators ";
    }



}