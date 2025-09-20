// Traversing a vector using an iterator.

/*  An iterator will only traverse once from begin() to end() of a container. If you make some changes and again want to traverse ,
    Create a new iterator , initialize it with begin() again and traverse.    */

#include<iostream>
#include<vector>
using namespace std;
int main(){
 
 vector<int> v;
 v.push_back(1);
 v.push_back(2);
 v.push_back(3);
 v.push_back(4);
 v.push_back(5);
 
 // Creating an iterator 
 vector<int>::iterator  it;
 
 // Initializing the iterator to the address of the vector. 
 // We should initialize with the address as it should start traversing from that address.
 /* Note :- Careful while differentiating front(), begin() & back(), end() because if we initiailze with the value,
    it cannot traverse (we gave the iterator a value). If we initialize with the address, it will start there and 
    then we can traverse with the help of loop.

    front() = value of first  element
    back() = value of last element
    begin() = address of first element
    end() = address of last element
 */
// Initializing the iterator with the address
it = v.begin();
// Traversing the vector using iterator.
while(it != v.end()){
    cout<< *it << endl; // If we write only "it" , it will throw error as it defines the address.Print (*iterator)
    it++;
}


    return 0;
}