#include<iostream>
using namespace std;
void extremeprint(int arr[],int n){
    int i = 0;
    int j = n-1;
    while(i<j){
        cout<< arr[i]<< endl;
        i++;
        cout<< arr[j]<< endl;  // j should be decrementing as it traverses from back
        j--;
    }
}
int main(){
  int arr[] = {0,1,2,3,4,5};
  extremeprint(arr, 6); 
  return 0;
}