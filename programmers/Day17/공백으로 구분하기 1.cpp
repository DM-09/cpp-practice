#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string tmp = "";
        
    for (auto i : my_string) {
        if (i == ' ') { answer.push_back(tmp); tmp = ""; }
        else { tmp += i; }
    }
    answer.push_back(tmp);
    
    return answer;
}
