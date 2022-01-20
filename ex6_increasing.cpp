#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> vec;

void helper(int N){
  if(N==0){
    return;
  }
  helper(N-1);
  vec.push_back(N);
  return;
}

vector<int> increasingNumbers(int N) {
  vec.clear();
  helper(N);
  return vec;
}
