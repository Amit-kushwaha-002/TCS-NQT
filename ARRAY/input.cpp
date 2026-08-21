#include<iostream>
using namespace std;
int main(){
  // string s;
  // cin>>s;
  // getline(cin , s);

  int n ;
  cin>>n;
  cin.ignore();
  string s;
  getline(cin, s );

  cout<<n<<" "<<s ; 
  return 0;
};