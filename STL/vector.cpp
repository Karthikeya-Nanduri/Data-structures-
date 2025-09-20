#include<iostream>
#include<vector>
using namespace std;
int main(){
// creation of vector
  vector<int> v;
// Adding elements to the vector
   v.push_back(10);
    v.push_back(20);
     v.push_back(30);
     v.push_back(40);
// Size of a vector
   cout<<"Size :"<< v.size()<< endl;
// Removing elements from the vector
    v.pop_back();
// Printing the last element 
    cout<< v.back()<< endl; // last element
    cout<< v.front()<< endl; // first element
// Checking if it's empty 
    if(v.empty()== true)
        cout<< "The vector is empty ";
    else cout<< "The vector is not empty ";


    return 0;
}