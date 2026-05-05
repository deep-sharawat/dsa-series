#include <iostream>
#include<math.h>
using namespace std;
int main(){

    int m;
    cin>>m;
    int ans2 = 0;
    int j = 0;
    int d;
    while(m !=0){
        int c = m%10;
        if(c == 0){
            d = 1;
        }else if (c ==1){d = 0;}
        ans2 = (d*pow(10,j))+ans2;
        m = m/10;
        j++;
    }cout<<ans2;

}
