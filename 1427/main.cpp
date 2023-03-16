#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> v;
  int n;
  cin >> n;
  while(n!=0){
    int n1 = n%10;
    v.push_back(n1);
    n/=10;
  }
  sort(v.begin(),v.end(),greater<int>());
  for(int i=0;i<v.size();i++){
    cout<<v[i];
  }
  return 0;
}