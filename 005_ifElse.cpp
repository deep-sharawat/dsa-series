#include<iostream>
using namespace std;
int main(){

    int a ,b;
    cin >>a>>b;

//     if (a>b){
//         cout << "a is greater than b"<<endl;
//     }else{
//         if (a<b){
//             cout<<"a is less than b"<<endl;
//         }else{
//             cout<<"a and b are equal";
//         }
//     }
// }   uper wala is bad method

if (a>b){
    cout<<"a is greater than b";
}
else if (a<b){
    cout<<"a is less than b";
}
else if(a==b){
    cout<<"a is equal to b"; 
}
}