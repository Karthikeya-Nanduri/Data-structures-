#include<iostream>
#include<stack>
using namespace std;
int main(){

    stack<int> s;
    s.push(2027);
    s.push(2026);
    s.push(2025);
    s.push(2024);
    cout<<"Size of stack is : "<< s.size()<<endl;
    cout<<s.top()<< endl;
    s.pop();
    cout<< s.top()<< endl;
    if(s.empty()==true){
        cout<<" Stack is empty "<< endl;
    }
    else cout<< "Stack is not empty"<< endl;
    cout<<"Current size of stack : "<< s.size()<< endl;

     
    return 0;
}