#include <iostream>
using namespace std;

int pivot(int arr[], int size){
    int start = 0;
    int end = size-1;
    int ele = INT_MIN;

    while (start<= end){
        if(ele < arr[start]){
            ele = arr[start];
        } start++;
    }return ele;

}
int main(){
    int array[8] = {7 ,9, 11,12, 1, 2, 3, 5};

    int a = pivot(array, 8);
    cout<<a;
    
}