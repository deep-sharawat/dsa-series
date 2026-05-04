#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    
  
    while(i<=n){
        int j= 1;
        char val= 'A';
        char a = val+i+j-2;
        while(j<=i){ 
            
            cout <<a<<" ";
            a = a +1;
            j = j+1;
        }cout<<endl;
        i = i+1;
        
    }
}