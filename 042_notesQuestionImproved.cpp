#include <iostream>
using namespace std;
int main(){

    int amount;
    cin>>amount;
    int a = amount/100;

    switch (1){
        
        
         case 1: cout<<"100 ke note = "<<a<<endl;
         amount = amount%100;
         
         case 2:
         cout<<"50 ke note = "<<amount/50<<endl;
         amount = amount%50;

         case 3:
         cout<<"20 ke note = "<<amount/20<<endl;
         amount = amount %20;

        case 4: cout <<"1 ke note ="<<amount<<endl;
                break;


         
    }

}