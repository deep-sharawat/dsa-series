#include <iostream>
using namespace std;
int main(){

    int size;
    cout<<"enter size : ";
    cin>>size;

    int i = 0;
    while (i<size){
        int j = 0;
        while (j<i){
            cout<<"* ";
            j++;
        }cout<<endl;
        i++;
    }
}