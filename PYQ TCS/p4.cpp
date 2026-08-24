//// XOR 
////CHARACTER

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   char arr[n];
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }

// char ans ;
// for(int i=0 ; i<n;i++){
//   ans=ans^arr[i];
// }  
// cout<<ans <<endl;

// }



// XOR  
// INTEGER

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

int ans ;
for(int i=0 ; i<n;i++){
  ans=ans^arr[i];
}  
cout<<ans <<endl;

}