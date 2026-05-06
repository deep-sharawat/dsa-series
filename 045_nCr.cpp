#include <iostream>
using namespace std;

int fact(int n){
    int ans = 1;
    for (int i = 1; i<=n;i++){
        ans = ans * i;
    }
    return ans;
}

int nCr(int p , int q){

    return fact(p)/(fact(q)*fact(p-q));

}
int main(){
    int a,b;
    cout<<"enter the value to ncr : ";
    cin>>a>>b;
    cout<<nCr(a,b);
}