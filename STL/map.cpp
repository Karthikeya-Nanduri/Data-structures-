#include<iostream>
#include<map>
/* Map is not a single variable container. It stores both key and value so we have to declare,insert,print 
   in pairs only. make_pair function can be used to create pairs */
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,string> table;
    // Insertion can be done in several ways.
    
    //step 1 :
    table[1] = "Chatgpt"; // Easy way, mention key in squ brackets along with map_name , equalize it to the value.
    // step 2:
    table.insert(make_pair(2,"Gemini")); // We are making a pair and inserting in the same line.
    // step 3:
    pair<int,string> p;   // ** Creating a pair **
    p.first = 3;
    p.second = "Claude"; // This contains more steps but this is clear understanding of how the above steps works.
    table.insert(p); 

    // Traversing the map using iterator 
    unordered_map<int,string>:: iterator it;
    it = table.begin();
    pair<int,string> print;   // Create a pair and equal that to iterator as we cannot return the iterator directly 
    // The iterator can contain one variable but the map elements have key and value (pair).
    while(it != table.end()){
        print = *it;                                    
        cout<< print.first << " " << print.second<< endl;
        it++;   // If not, it leads to an infinite output
    } 

    // We can findout weather an element is present in the map using find().
    /* When we run find(),an iterator will be initialized and traverse the entire map till end() looking for the key.
     so if the iterator reaches the end() , the key is not there in the map. if the iterator finds the key, 
     it will not reach the end. It will stop at the key that we need to find
    */
    // *** The find function finds the element based on key only ***
    if(table.find(2)!= table.end()){
        cout<<" The element found "<< endl;
    }
    else cout<< " The element not found "<< endl;



    /* Now...for the ordered map, declare stating 'map'. Then all the elements will be arrranged in order
       with respect to the **key's**. Values are not the criteria for order of arrangement
    */

    return 0;
}