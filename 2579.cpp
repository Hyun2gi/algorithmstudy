#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin>> n;
  int result[n];
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  if(n==1){
    cout<<arr[0];
  }else if(n==2){
    cout<<arr[0]+arr[1];
  }else{
    result[0] = arr[0];
    result[1] = arr[0] + arr[1];
    result[2] = max(result[0]+arr[2],arr[1]+arr[2]);
    for(int i=3;i<n;i++){
      result[i] = max(result[i-2]+arr[i],result[i-3]+arr[i-1]+arr[i]);
    }
    cout<<result[n-1];
  }
}
