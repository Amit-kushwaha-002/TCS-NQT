// input the value of i and j  then sun i to j value ;


#include<iostream>
using namespace std;
int main(){
  int i ,j;
  cin>>i;
  cin>>j;
  int ans = 0;
  for (int k=i;k<=j;k++){
    ans+=k;
  }
  cout<<ans; 
};
