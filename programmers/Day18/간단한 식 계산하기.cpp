#include <string>
#include <vector>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    vector<string> l;
    string tmp;
    
    
    for (auto i : binomial) {
        if (i == ' ') { l.push_back(tmp); tmp = ""; }
        else { tmp += i; }
    }
    
    string op = l[1];
    int a = stoi(l[0]);
    int b = stoi(tmp);
    
    if (op == "+") { answer = a + b; }
    else if (op == "-") { answer = a - b; }
    else { answer = a * b; }
    
    return answer;
}
