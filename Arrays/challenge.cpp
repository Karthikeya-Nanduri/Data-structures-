#include<iostream>
#include<vector>
using namespace std;

int numberofIterations(vector<int> &a , vector<int> &b){
    
for(int i=0;i<a.size();i++){
        if(a[i]>b[i]){
        a[i] = a[i]-1;
        }
        if(a[i]<b[i]){
        a[i] = a[i]+1;
        }
}
}

int main(){
    int n;
    cin>> n;
    while(n){
     int no_of_integers;
     cin>> no_of_integers;
        vector<int> a,b;
     for(int i=0;i<no_of_integers;i++){
        int temp;
        cin>> temp;
    }    
     for(int i=0;i<no_of_integers;i++){
        int temp;
        cin>> temp;
    }

        int ans = numberofIterations(a,b);
            cout<< ans << endl;
    n--;
    }
    return 0;
}