#include <string>
#include <vector>
#include <cstring>

using namespace std;

string solution(string my_string, string alp) {
    string answer = "";
    
    for (auto i : my_string) {
        string cur = string(1, i);
        if (cur == alp) { cur = string(1, i - 32); }
        answer += cur;
    }
    
    return answer;
}
