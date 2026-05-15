#include <iostream>
using namespace std;

int max(int arr[], int size){
    int start = 0;
    int end = size -1;
    int mid = start +(end - start)/2;

    while (start<end){
        if(arr[mid] < arr[mid+1]){
            start = mid+1;
        }else {
            end = mid;
        }mid = start +(end - start)/2;
      
    }
return start;

}
int main(){

    int arrayb[10] = {1,2,3,7,8,9,1111,1111111,4,0};
    int a = sizeof(arrayb)/sizeof(int);
    
    int b = max(arrayb,a);
    cout<<"peak element is : "<<arrayb[b];
}