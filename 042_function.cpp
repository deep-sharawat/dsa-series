#include <iostream>
using namespace std; 

int power(int a , int b){
    int ans = 1;
    for (int i = 1;i<=b;i++){
        ans = ans*a;
    } return ans;
}
int main(){
    int x,y;
    cout<<"enter the no : ";
    cin>>x;

    cout<<"enter the power : ";
    cin>>y;

    int answer = power(x,y);

    cout <<"answer is : "<<answer;
}