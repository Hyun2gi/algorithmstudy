#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long arr[n];
  if(n==1){
    cout<<1;
  }else if(n==2){
    cout<<1;
  }else{
    arr[0] = 1;
    arr[1] = 1;
    long long zeronum = 1;
    for(int i=2;i<n;i++){
      arr[i] = zeronum*2 + (arr[i-1]-zeronum);
      zeronum = zeronum+(arr[i-1]-zeronum);
    }
    cout << arr[n-1];
  }
}
