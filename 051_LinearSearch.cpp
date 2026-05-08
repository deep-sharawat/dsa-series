#include <iostream>
using namespace std;

    bool srch(int aray[]){
        
        for (int i = 0 ; i<10; i++){
        if (1 ==aray[i]){
            
            return 1;
        }
        
    }return 0;
}

int main(){

    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
   
    srch(arr);
    if(srch(arr)){
        cout<<"yes ";
    }
    else{
        cout<<"no";
        }
    }

