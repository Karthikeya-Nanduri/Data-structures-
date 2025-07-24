#include<iostream>
using namespace std;
int cal(int a,int b){
      int ans = 1;
    for(int i=1;i<=b;i++){
         ans = ans*a;
         
    }
    return ans;
  }
int main(){
 
 int answer = cal(2,10);
 cout<< answer<< endl;


    return 0;
}