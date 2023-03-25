#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string a;
  string f;
  vector<char> answer;
  cin >> a;
  cin >> f;
    for(int i=0;i<a.length();i++){
      answer.push_back(a[i]);
      if(f.back()==answer.back()){
        int flag = 0;
        if(answer.size()<f.length()){
          continue;
        }
        for(int j=0;j<f.length();j++){
          if(f[f.length()-1-j]!=answer[answer.size()-1-j]){
            flag = 1;
            break;
          }
        }
        if(flag ==0){
          for(int j=0;j<f.length();j++){
            answer.pop_back();
          }
        }
    }
  }
  if(answer.size()==0){
    cout << "FRULA";
  }else{
    for(int i=0;i<answer.size();i++){
      cout<<answer[i];
    }
  }
  return 0;
}
