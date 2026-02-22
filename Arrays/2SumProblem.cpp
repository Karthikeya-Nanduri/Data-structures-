#include<iostream>
using namespace std;

void AllPairs(int arr[], int n , int target){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<< arr[i]<<" , "<<arr[j]<< endl;    
            }
        }
    }
}
int main(){
  int arr[] = {1,2,3,4,5};
   AllPairs(arr,5 ,6 );

    return 0;
}