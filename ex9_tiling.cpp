#include<iostream>
#include <vector>
using namespace std;

int tillingProblem(int n, int m){

  if(n<m){
    return 1;
  }

  int ans;
  ans=tillingProblem(n-m,m)+tillingProblem(n-1,m);
  return ans;

}

int main(){
  cout<<tillingProblem(4,3);
}
