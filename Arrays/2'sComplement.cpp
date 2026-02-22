#include<iostream>
#include<vector>
using namespace std;

vector<int> TwosComplement(vector<int> binary){
    int n = binary.size();
    vector<int> ans(n,0);
    // Step 1 : Flip the binary and store in ans.
    for(int i=n-1;i>=0;i--){
       if(binary[i]==0){
        ans[i]=1;
       }
       else ans[i]=0;   
    }
    // Step 2 : Adding 1 to the ans.
    int carry = 1;   // As in 2's complement we add 1 to the binary number
     for(int i=n-1;i>=0;i--){
        int sum = ans[i]+carry;
         ans[i] = sum % 2;
        carry = sum /2;     
    }
   


    return ans;
 
}
int main(){
    
    vector<int> binary = {0,1,1,0,1};
    vector<int> ans = TwosComplement(binary);
    for(int i=0;i<ans.size();i++){
        cout<< ans[i];
    }
    cout<< endl;

    return 0;
}
