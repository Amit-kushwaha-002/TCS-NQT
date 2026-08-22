//  take a string input like *****##### , and then if equal * and # then return 0 , and if  * > # return positive integer , if *<# return negative integer 

#include<iostream>
using namespace std;
int main(){
  string s;
  getline(cin,s);

  int cnt_has = 0 ;
  int cnt_star = 0;

  for (int i=0 ;i<=s.length();i++){
    if(s[i]=='#') cnt_has++;
    else if(s[i] == '*') cnt_star++ ;
  }

  cout<<cnt_star-cnt_has ;
  return 0 ;
};