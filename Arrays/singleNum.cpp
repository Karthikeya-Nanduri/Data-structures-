#include<iostream>
#include<algorithm>
using namespace std;

int singleNum(int arr[], int n){
    // Sort the array first.
    sort(arr , arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            i = i+2;
        }
        if(arr[i]!=arr[i+1]){
            return i+1;
        }
    // But when the element is in last index , the above code doesnt work
        else if(i==n-1){
            return i;
        }
          
    }



}

int main(){
  int arr[5]= {1,3,3,1,4};
  int ans= singleNum(arr,5);
  cout<< ans << endl;

    return 0;
}