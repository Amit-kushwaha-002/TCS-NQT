// whose value is greater than all of its prior value in a array , take input of array and size also 


#include<iostream>
using namespace std;
int fun(int arr[] , int n){
  int count = 1;
  int max = arr[0];
  for(int i=1 ; i<n;i++){
    if (max<arr[i]){
      count++;
      max=arr[i];
    }
  }
  return count;
}
int main(){
  int n ;
  cin>>n;
  int arr[n];
  for (int i=0;i<n;i++){
    cin>>arr[i];
  }

  cout<<fun(arr,n)<<endl ;
  return 0;
}