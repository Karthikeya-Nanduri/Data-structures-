#include<iostream>
using namespace std;
int areaofcircle(int r){
    int a = 3.14*r*r;
    return a; 
}
int main(){
  int radius_of_circle;
  cout<<"Enter the radius: ";
  cin>> radius_of_circle;
  int ans = areaofcircle(radius_of_circle);
  cout<<ans<<endl;
  return 0;
}