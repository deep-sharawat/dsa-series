#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;

    while ( start <= end){

        if (arr[start] == key){
            return start;
        }
            start++;
       
    }return -1;

}


int main(){



    int array[6] = {1,2,3,4,5,6};

    int bb = linearSearch(array, 6,5);

    if(bb  == -1){
        cout<<"element is not present in the array"<<endl;
    }else{
        cout<<"element is present at the index "<<bb;
    }
    
}