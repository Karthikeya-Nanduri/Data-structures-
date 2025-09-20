#include<iostream>
#include<vector>
using namespace std;

int main(){
 // Creating a 2D vector
 vector<vector<int>> v;
// Now...we dont know the No.of rows and columns for this 2d vector as we did'nt mention any sizes.
// The No.of rows will be the size of vector v. (Refer the structure of 2d vector) 
 int Numofrows = v.size();
 // Now for each block , there will be one more vector stored with some blocks. we definitely know that there is atleast one row. 
 /* This is fine for a vector having same cols for every row */
 int Numofcols = v[0].size();


    return 0;
}