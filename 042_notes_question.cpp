#include <iostream>
using namespace std;
int main(){

    int amount;
    cin>>amount;
    int a,b,c;
    a = amount/100;
    
   

    switch (1){
        

         case 1: cout<<"100 ke note = "<<a<<endl;
         amount = amount - a*100;

         case 2: b = amount/50;
         cout<<"50 ke note = "<<b<<endl;
         amount = amount -b*50;

         case 3:  c = amount/20;
         cout<<"20 ke note = "<<c<<endl;
         amount = amount - c*20;

        case 4: cout <<"1 ke note ="<<amount<<endl;
                break;


         
    }

}