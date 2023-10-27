#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    string tmp;
    
    for (auto i : myString) {
        if (i == 'x') { answer.push_back(tmp.length()); tmp = ""; }
        else { tmp += i; }
    }
    
    answer.push_back(tmp.length());
    
    return answer;
}
