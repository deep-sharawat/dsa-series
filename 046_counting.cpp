#include <iostream>
using namespace std;

void printCounting(int n){
    for (int i = 0; i<=n; i++){
        cout<<i<<" ";
    }
}
int main(){
    int a;
    cout<<"enter the last value : ";
    cin>>a;

    printCounting(a);
}