#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    
    for (auto i : picture) {
        string s;
        for (auto j : i) {
          for (int q = 0; q < k; q++) { s += j; }
        }
        for (int q = 0; q < k; q++) { answer.push_back(s); }
    }
    
    return answer;
}
