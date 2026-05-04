
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    char first = 'A';

    while(i<=n){
        int j= 1;
        while(j<=n){
            cout <<first;
           
            j = j+1;
        }cout<<endl;
        i = i+1;
         first = first+1;
    }
}

// //by formula 
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     char first = 'A';
    
//     while(i<=n){
//         int j= 1;
//         char b = first +i-1;
//         while(j<=n){
//             cout <<b;
           
//             j = j+1;
//         }cout<<endl;
//         i = i+1;
         
//     }
// }