#include <iostream>
using namespace std;
int occ(int arr[], int size, int key){
    int sum = 0;
    int start = 0;
    int end = size-1;
    while(start <= end){
        if(arr[start] == key){
            sum++;
        }start++;
    }return sum;
}

int main(){
    int array[5] = {1,2,2,2,3};
    int a = occ(array,5,2);
    cout<<"element is present : "<<a<<" times."<<endl;

}