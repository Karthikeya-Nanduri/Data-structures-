#include<iostream>
#include<list>
using namespace std;
int main(){

    // creation of list
    list<int> myList;
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);
    myList.push_back(50);
    // 20-->30-->40-->50
    myList.push_front(10);
     // 10-->20-->30-->40-->50
    myList.pop_back();
    // 10-->20-->30-->40
    myList.pop_front();
    //20-->30-->40
    myList.push_back(40);
    myList.push_back(40);
    cout<< "Printing the list "<< endl; 
    //Traversing using an iterator.
    list<int>:: iterator it;
    it = myList.begin();
    while(it!= myList.end()){
        cout<< *it << endl ;  // This prints the value as begin() is the address of the list.
        it++; // If not incremented , it leads to an infinite output.
    }

    // Removing a particular element present (if we give 10 , all 10's in the list will be removed)
    myList.remove(40);
    cout<< "Printing after removing " << endl;
    // *** Iterator can be only used for one time in a loop. Again we have to declare another for another loop.
    list<int>:: iterator ite;
    ite = myList.begin();
    while(ite!= myList.end()){
        cout<< *ite << endl ;  
        ite++; 
    }

// Remaining functions are same as vector container.

    return 0;
}