// input a array there are every  integer is double but  only one is single , you have to find the single integer from the array

#include<iostream>
using namespace std;
int main(){
  int n ;
  cin>>n;
  int arr[n];
  for (int i=0;i<n;i++){
    cin>>arr[i];
  };

  int single=0;
  for(int i=0;i<n;i++){
    single^=arr[i];
  }
  cout<<single<<endl;
  return 0;
};