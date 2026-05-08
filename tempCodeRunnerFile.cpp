#include<iostream>
using namespace std;

int getMax(int array[] , int size1){

   int a = INT_MIN;

   for(int i = 0; i<size1;i++){
        a = max(array[i],a);
   }return a;

}
int getMin(int array2[],int size2){
   int b = INT_MAX;
   for(int i = 0; i<size2;i++){

      b = min(array2[i],b);
      
   }return b;
}

int main(){
   int arr[100];
   int size;
   cout<<"enter size : ";
   cin>>size;

   for (int i =0; i<size; i++){
      cout<<"enter "<<i+1<<"value : "<<endl;
      cin>>arr[i];


   }
         int g = getMax(arr , size);
      cout<<"maxium value is : "<<g<<endl;

      int h = getMin(arr , size);
      cout<<"minimum value is : "<<h<<endl;

}