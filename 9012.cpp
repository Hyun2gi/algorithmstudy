#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> str;
  vector<string> ans;
  for(int i=0;i<n;i++){
    string s;
    cin >> s;
    str.push_back(s);
  }

  for(int i=0;i<n;i++){
     int flag = 0;
    stack<string> st;
    for(int j=0;j<str[i].size();j++){
      string chk = str[i];
      if(chk[j]=='('){
        st.push("(");
      }else{
        if(st.size()==0){
          flag = 1;
          break;
        }
        st.pop();
      }
    }

    if(flag==1 || st.size()>0){
      ans.push_back("NO");
    }else{
      ans.push_back("YES");
    }
  }

  for(int i=0;i<n;i++){
    cout<<ans[i] <<"\n";
  }


  return 0;
}
