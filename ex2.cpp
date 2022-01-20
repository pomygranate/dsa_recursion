#include<iostream>
#include<vector>
using namespace std;

bool sortCheck(vector<int> arr){
  //base case
  if(arr.size()==0){
    return true;
  }
  //rec case
  return arr[0]<arr[1] && sortCheck(arr+1)
}

int main(){

  vector<int> n={5,10,51,56,95};

  cout<<sortCheck(n);

  }
