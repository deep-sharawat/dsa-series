#include <iostream>
using namespace std;

bool isEven(int a){
  if (a%2 == 0){
    return 1;
  }else{
    return 0;
  }
}
 
int main(){
    int n;
    cout<<"enter the value to check : ";
    cin>>n;
  
    if(isEven(n) ){
        cout<<"even";
    }else{cout<<"odd";}
}