#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
  int n;
  cin >> n;
  queue<int> q;
  for(int i=1;i<=n;i++){
    q.push(i);
  }

  int i=1;
  queue<int> answer;
  while(!q.empty()){
    if(i%2==1){
      answer.push(q.front());
      q.pop();
    }else{
      int n2 = q.front();
      q.pop();
      q.push(n2);
    }
    i++;
  }

  for(int i=0;i<n;i++){
    cout<< answer.front() << " ";
    answer.pop();
  }
  return 0;
}
