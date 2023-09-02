#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;

    for(int i = l; i <= r; i++) {
      string s_num = to_string(i);
      int n = 1;
      
      for(char c : s_num){
        if (c != '5' and c != '0') {n = 0; break;}
      }

      if (n) {answer.push_back(i);}
    }
    if (answer.empty()){ answer.push_back(-1); }
  
    return answer;
}
