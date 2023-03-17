#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
  int n;
  priority_queue<int,vector<int>,greater<int>> pq;
  cin>>n;
  for(int i=0; i<n; i++){
    int a;
    cin>>a;
    pq.push(a);
  }
  if(n==1){
    cout <<0;
    return 0;
  }
  int answer = 0;

  while(pq.size()!=1){
    int n1;
    int n2;
    n1 = pq.top();
    pq.pop();
    n2 = pq.top();
    pq.pop();
    answer += n1+n2;
    pq.push(n1+n2);

  }
  cout << answer;
  return 0;
}
