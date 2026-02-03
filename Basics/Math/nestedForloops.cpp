#include<iostream>
using namespace std;
int main(){
      /* For each i-th iteration , j-th loop will completely execute. After the complete execution , i value will be incremented and j will
           start again from 1 to its complete execution */
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cout << i << "," << j << endl ; 
        }
    }


    return 0;
}