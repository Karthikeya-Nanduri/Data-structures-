#include<iostream>
using namespace std;
int main(){
  int size;
  cout<< "Enter size of square : ";
  cin >> size;
    for(int i=0;i<size;i++){ //  print stars acc to size No.of rows...so i will be rows (outer loop).
        for(int j=0;j<size;j++){ // Printing stars for each row ...so j will be columns (inner loop).
               cout << "* ";
        }
      cout<<endl;     // After printing 4 stars for each row, move to next line.
    }
    return 0;
}