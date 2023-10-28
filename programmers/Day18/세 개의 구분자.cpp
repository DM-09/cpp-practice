#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string tmp;
    
    for (auto i : myStr) {
        if (i == 'a' or i == 'b' or i == 'c') {
            if (tmp != "") { answer.push_back(tmp); tmp = ""; }
        }
        else { tmp += i; }
    }
    if (tmp != "") { answer.push_back(tmp); }
    if (answer.size() == 0) { answer.push_back("EMPTY"); }
    
    return answer;
}
