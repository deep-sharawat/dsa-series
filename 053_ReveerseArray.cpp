#include <iostream>
using namespace std;

void printArray(int array[],int size){
    for (int i = 0;i<size;i++){
        cout << array[i] <<" " ;
    }
}

void reverse(int array[],int size){

    int start = 0;
    int end = size - 1;

    while(start<=end){
    swap(array[start],array[end]);
    start++;
    end--;
    }
// return array; (no need to return because array auto changes in main fn) see notes
}

int main(){

        int arr[6] = { 1,4,0,5,-2,15};
        int brr[5] = {2, 6,3,9,4};

        reverse(arr , 6);
        reverse(brr, 5);

        printArray(arr,6);
        cout<<endl;
        printArray(brr,5);


}