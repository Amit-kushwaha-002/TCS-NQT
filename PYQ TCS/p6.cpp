// input array 0,1,2 in any order but you have to sort it and print it 


#include<iostream>
using namespace std;
void fun_arrsort(int arr[], int n){
  int zero = 0;
  int one = 0;
  int two = 0;

  for(int i=0;i<n;i++){
    if (arr[i]==0) zero++;
    else if(arr[i]==1) one++;
    else two++;
  }
  int index = 0;
  for(int i=0;i<zero;i++){
    arr[index++]=0;
  }
  for(int i=0;i<one;i++){
    arr[index++]=1;
  }
  for(int i=0;i<two;i++){
    arr[index++]=2;
  }
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for (int i=0;i<n;i++){
    cin>>arr[i];
  }
  fun_arrsort(arr , n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
  }



  return 0;
}