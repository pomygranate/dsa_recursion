#include<iostream>
using namespace std;


int fastpower(int a,int n){
  int ans;
  if(n==0){
    return 1;
  }
  int subprob = fastpower(a,n/2);
  int subprobsq = subprob*subprob;

  if(n&1){
    return a*subprobsq;
  }
  else{
    return subprobsq;
  }
}

int main()
{
  cout<<fastpower(2,3);
}
