#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> v;
  int n;
  cin >> n;
  for(int i=0; i<n;i++){
    int ex;
    cin>>ex;
    v.push_back(ex);
  }
  sort(v.begin(),v.end(),greater<int>());
  int answer = -1;

  for(int i=0;i<v.size()-2;i++){
    for(int j=i+1;j<v.size()-1;j++){
      if(v[i]<v[j]+v[j+1]){
        answer = v[i]+v[j]+v[j+1];
        break;
      }
    }
    if(answer!=-1){
      break;
    }
  }

  cout << answer;
  return 0;
}
