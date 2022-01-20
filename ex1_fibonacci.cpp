#include <iostream>
using namespace std;

int fib(int nth){

  //base case
  if(nth==0 or nth==1){
    return nth;
  }
  //rec case
  int ans = fib(nth-1)+fib(nth-2);
  return ans;
}

int main()
{
  cout<<fib(7);
}
