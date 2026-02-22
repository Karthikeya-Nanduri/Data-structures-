#include<iostream>
using namespace std;
int func(int arr[],int size){
   cout<< "The size of the array is : "<<size<<endl;
   cout<< "The Elements of the array are : ";
   for(int i=0;i<size;i++){
     cout<<arr[i]<<" ";
   }
}
int main(){
  int arr[]= {1,2,3,4,5};
  int size = 5;
  func(arr,5);
    return 0;
}