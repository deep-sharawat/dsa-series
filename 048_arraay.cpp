#include <iostream>
using namespace std;
int main(){

    char arru[5] = {'a','e','i','o','u'};

    int size = sizeof(arru)/sizeof(char);

    for (int i = 0; i<size;i++){
        cout<< arru[i]<<" ";
    }
} 