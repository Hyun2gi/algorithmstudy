#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin>>n;
  deque<int> dq;
  deque<int> result;
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    dq.push_front(a);
  }

  for(int i=0;i<n;i++){
    if(dq[i]==1){
      result.push_front(i+1);
    }else if(dq[i]==2){
      result.insert(result.begin()+1,i+1);
    }else{
      result.push_back(i+1);
    }
  }

  for(int i=0;i<n;i++){
    cout<<result[i]<<" ";
  }
  return 0;
}
