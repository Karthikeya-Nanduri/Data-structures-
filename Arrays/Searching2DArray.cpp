#include<iostream>
using namespace std;
// m = No.of rows
// n = No.of columns
void searchElement(int arr[][4],int m , int n , int target){ 
    // In 2-D array, we have to definitely mention no.of cols while taking input  
    for(int r=0;r<m;r++){
      for(int c=0;c<n;c++){
        if(arr[r][c]==target){
               cout<<"Element found at : "<<r<<","<<c<<endl;
        }     
    }
  }
}
int main(){
  int arr[3][4];
  int target ;
    int m = 3;
    int n = 4;
 for(int r=0;r<m;r++){
    for(int c=0;c<n;c++){
      cout<<"Enter the element at "<<r<<","<<c<<endl;
        cin>> arr[r][c];         
    }
  }
  cout<<" Enter the target element : ";
  cin >> target ;
  searchElement( arr, 3 , 4 , target);

  return 0;
}