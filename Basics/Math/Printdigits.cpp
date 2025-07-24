#include<iostream>
using namespace std;

void printdigits(int x){
    while(x>0){      
       int n = x%10;   // When we divide a number with 10, the reminder  will be the last digit.
       cout<<"Digit :"<< n<<endl; // Print that last digit
       x = x/10; // Then if you divide the int with 10, the last digit will be skipped as that will be decimal.
    }  // Repeat this in loop to print the last digit everytime...then each digit of the num will be printed 
}
int main(){
     int num;
     cout<<"Enter a number to print the digits : ";
     cin>> num;
     printdigits(num);


    return 0;
}