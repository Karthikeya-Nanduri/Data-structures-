#include<iostream>
using namespace std;

int sortzeroandone(int arr[],int n){
    int h , l;
    l = 0;
    h = n-1;
    while(l<h){
        if(arr[l]==1&&arr[h]==0){
            swap(arr[l],arr[h]);
            l++ , h--;
        }
        else{
            if(arr[l]==0){
                l++;
            }
            if(arr[h]==1){
                h--;
            }
        }
    }
    
}

int main (){




    return 0;
}