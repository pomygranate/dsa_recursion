#include<iostream>
using namespace std;

int firstOccu(int arr[],int n,int key){
  //base case
  if(arr[0]==key){
    return 0;
  }

  if(n==0){
    return -1;
  }

  //rec case
  int ans;
  if(firstOccu(arr+1,n-1,key)>=0){
    ans = 1+firstOccu(arr+1,n-1,key);
  }
  else{
    ans=-1;
  }
  return ans;
}

int main()
{
  int arr[10]={5,3,6,7,8,9,10,1,2,4};
  cout<<firstOccu(arr,10,15);
}
