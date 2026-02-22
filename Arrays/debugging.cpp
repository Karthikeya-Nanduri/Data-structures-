#include<iostream>
using namespace std;

// int main(){
//     int n, sum=0;
//     cin >> n;
//     int input[n];
//     for(int i=0;i<n;i++){
//         cin >> input[i];
//     }
//      for(int i=0; i<n; i++){
//          sum = sum + input[i];
//      }
//     cout << sum << endl;
//     return 0;
// }


// void linearSearch(int arr[], int n ,int val){
//     for(int i=0;i<n;i++){
//         if(arr[i]==val){
//             cout<<" element found at index "<< i << endl;
//         }
//     }
//     return;
// }
// int main(){
//   int arr[5] = {1,2,3,4,5};
//    linearSearch(arr , 5 , 4);
//     return 0;
// }

int tripletSumToX(int input[], int size, int x){
	int triplets = 0;
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			for(int k=j+1; k<size; k++){
				if(input[i] + input[j] + input[k] == x) 
                    triplets++;
			}
		}
	}
	return triplets;
}
int main(){
  int arr[5] = {1,2,3,4,5};
  int ans = tripletSumToX(arr , 5 , 10);
  cout<< ans<< endl;

    return 0;
}

