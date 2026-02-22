#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        cout<< arr[i]<< endl;
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    reverse(arr , 5);
    return 0;
}