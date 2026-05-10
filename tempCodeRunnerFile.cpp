#include <iostream>
using namespace std;

void count(int arr[], int size){

   

    for (int i=0;i<size;i++){
       int count = 0;
       for (int j = 0;j<size;j++){

        if (arr[i] == arr[j]){
            count++;
        }
       }cout<< arr[i]<< " comes "<<count<<" times"<<endl;
    }
}

int main(){
int array[5] = {1,1,2,2,3};

count(array, 5);

}