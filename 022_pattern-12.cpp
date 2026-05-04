// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
    

//     while(i<=n){
//         char first = 'A';
//         int j= 1;
//         while(j<=n){
            
//             cout <<first;
//             j = j+1;
//             first = first+1;
//         }cout<<endl;
//         i = i+1;
        
         
//     }
// }

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;

     
    while(i<=n){
       
        int j= 1;
        
        while(j<=n){ 
            char ch = 'A' +j-1;
            cout <<ch;
            j = j+1;
        }cout<<endl;
        i = i+1;
        
         
    }
}