#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string tmp;
    
    for (auto i : myString) {
        if (i == 'x' and tmp != "") { answer.push_back(tmp); tmp = ""; }
        else if (i != 'x') { tmp += i; }
    }
    if (tmp != "")  { answer.push_back(tmp); }
    sort(answer.begin(), answer.end());
    
    return answer;
}
