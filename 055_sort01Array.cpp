#include <iostream>
#include <algorithm>
using namespace std;


void printArray(int arr[], int size){
    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void sortOne(int arr[], int size){
    int left = 0;
    int right = size - 1;  //size-1 because we have to get index
   
    while(left < right){
        
        while (left<right && arr[left] == 0){
            left++;
        }while ( left<right && arr[right] == 1){
            right--;
        }

        swap(arr[left],arr[right]);
        left++;
        right--;

    }

}
int main(){

    int arr[8] = {1,1,0,0,0,0,1,0};

    sortOne(arr,8);
    printArray(arr, 8);
    
}