#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    
    while(i<=n){
        int j= 1;
        char val= 'A';
        while(j<=n){ 
            char ch = val+i-1;
            cout <<ch<<" ";
            val = val +1;
            j = j+1;
        }cout<<endl;
        i = i+1;
    }
}