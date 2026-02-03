#include<iostream>
using namespace std;
int main(){
   int i;
   if(cin>>i){       // If the user gave input this will execute   
    cout<< "User gave input"<<"  ";    
   }
   if(cout<<""){         // This would be always true. So this will execute successfully
    cout<< endl << "Output";   
   }
     return 0;
}