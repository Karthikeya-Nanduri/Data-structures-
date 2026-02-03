#include<iostream>
using namespace std;
int main(){
  int height, width;
  cout<< "Enter height : "<< endl;
  cin >> height;
  cout<< "Enter width : "<< endl;
  cin>> width;
  for(int i=0; i<height; i++){   // No of rows = height = outer loop
    for(int j=0;j<width;j++){    // No of columns = width = inner loop
        cout<< "* ";
    }
    cout<<endl;
  }
    return 0;
}