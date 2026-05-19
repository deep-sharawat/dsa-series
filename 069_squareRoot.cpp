#include <iostream>
using namespace std;

int root(int n){ 
    int start = 0;
    int end = n;
    int mid = start +(end-start)/2;
    int ans = -1;

    while (start <= end){
            int sq = mid*mid;
            if(sq == n){
                return mid;
            }
            else if(sq < n){
                ans = mid;
                start = mid+1;
            } 
            else{
                end = mid-1;
            } mid = start + (end - start)/2;
    }return ans;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int a = root(n);
    cout<<a;
}