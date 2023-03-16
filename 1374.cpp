#include <iostream>
#include <queue>
using namespace std;

int main() {
  int n;
  cin >> n;
  priority_queue<int,vector<int>,greater<int>> q;
  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
  for(int i=0; i<n;i++){
    int a,b,c;
    cin>>a >>b>> c;
    pq.push(make_pair(b,c));
  }
  int answer = 0;
  while(!pq.empty()){
    pair<int,int> p = pq.top();
    pq.pop();
    if(q.empty()){
      q.push(p.second);
      answer+=1;
    }else{
      if(q.top() > p.first){
        answer+=1;
        q.push(p.second);
      }else{
        q.pop();
        q.push(p.second);
    }
    }
  }

  cout<<answer;
}
