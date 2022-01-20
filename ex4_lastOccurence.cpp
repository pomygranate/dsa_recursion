#include<iostream>
using namespace std;

int lastOccu(int arr[],int n,int key){
  //base case
  if(arr[n-1]==key){
    return n-1;
  }

  if(n==0){
    return -1;
  }

  //rec case
  int ans;
  if(lastOccu(arr+n-1,n-1,key)>=0){
    ans = lastOccu(arr+n-1,n-1,key)-1;
  }
  else{
    ans=-1;
  }
  return ans;
}

int main()
{
  int arr[10]={5,3,6,7,8,9,10,1,2,4};
  cout<<lastOccu(arr,10,2);
}
