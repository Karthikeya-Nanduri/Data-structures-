#include<iostream>
using namespace std;
int factorial(int num){
   int fact = 1;
    for(int i=1;i<=num;i++){
           fact = fact*i;
   }
   return fact;
}
int main(){
  int number;
  cout<<"Enter the number: ";
  cin>>number;
  int ans = factorial(number);
  cout<< ans ;
 return 0;
}