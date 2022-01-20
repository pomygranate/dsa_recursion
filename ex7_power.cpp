#include<iostream>
using namespace std;


int power(int a,int n){
  int ans;
  if(n==0){
    return 1;
  }
  ans = a*power(a,n-1);
  return ans;
}

int main()
{
  cout<<power(2,3);
}
