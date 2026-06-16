#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int check=n;
  int armcheck=n;
  int count=0;
  int sum=0;
  while(n>0){
      count++;
      n=n/10;
  }
  while(check>0){
      int lastdigit=n%10;
      sum=sum+pow(lastdigit,count);
      check=check/10;
  }
  if(armcheck==sum){
      cout<<"Armstrong number";
      return 0;
  }
  cout<<"Not a Armstrong number";
}
