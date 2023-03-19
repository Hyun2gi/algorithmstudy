#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<int,string>> v;
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    string b;
    if(a != 3){
      cin >> b;
    }else{
      b = "x";
    }
    v.push_back(make_pair(a,b));
  }
  deque<string> dq;
  for(int i=0;i<v.size();i++){
    if(v[i].first==1){
      dq.push_back(v[i].second);
    }else if(v[i].first==2){
      dq.push_front(v[i].second);
    }else{
      if(dq.size()!=0 && i!=0){
        int ck = i-1;
        while(v[ck].first == 3 || v[ck].first == 0){
          ck--;
        }
        if(v[ck].first==1){
          dq.pop_back();
          v[ck].first = 0;
        }else{
          dq.pop_front();
          v[ck].first = 0;
        }
      }
    }
  }
  if(dq.size()==0){
    cout << 0;
  }else{
   for(int i=0;i<dq.size();i++){
      cout << dq[i];
    }
  }
  return 0;
}
