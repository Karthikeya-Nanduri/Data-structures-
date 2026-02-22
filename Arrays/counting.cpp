#include<iostream>
using namespace std;
void counting(int arr1[],int size){
     int x=0;
     int y=0;
for(int i=0;i<size;i++){
     if(arr1[i]==0) x = x+1;
     if(arr1[i]==1) y = y+1;
}
cout<< "No.of 0's : "<< x << endl;
cout<< "No.of 1's : "<< y << endl;
}
int main(){
   int arr[5];
   cout<<"Enter elements for array : "<< endl;
   for(int i=0;i<5;i++){
       cin>> arr[i];
   }
   counting(arr,5);
   return 0;
}