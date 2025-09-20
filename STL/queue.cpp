#include<iostream>
#include<queue>
using namespace std;

int main(){
// Creation of a queue.
  queue<int> q;
// Pushing elements.
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
// 10,20,30,40
// Removing elements.
  q.pop();
// 10,20,30
// Returns first element
  cout<< q.front()<< endl;
  // Returns last element
  cout<< q.back()<< endl;
  // Size of the queue
  cout<< q.size()<< endl;
  // Check if it's empty.
  if(q.empty()== true){
    cout<< "Queue is empty "<< endl;
  }
  else cout<< "Queue is not empty"<<endl ;
// We can swap the elements between 2 queues 
 queue<int> q2;
 q2.push(100);
 q2.push(200);
 q2.push(300);
 // swap function
 q.swap(q2);
 // Print to check
 cout<< q.front()<< endl;

    return 0;
}