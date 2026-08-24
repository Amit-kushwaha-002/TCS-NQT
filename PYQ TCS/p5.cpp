// input monkey in tree and banana peanut total and eat a peanut and banana monkey and then calculate how many monkey left in treee


#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k,j,m,p;
  cin>>n>>k>>j>>m>>p;
  int bananaeat = m/k;
  int rembanana = m%k;

  int peanuteat = p/j;
  int rempeanut = p%j;

  int left = n-(bananaeat+peanuteat);
  if(rembanana != 0 || rempeanut != 0){
    left=left-1;
  }
  cout<<left;
  return 0;
}