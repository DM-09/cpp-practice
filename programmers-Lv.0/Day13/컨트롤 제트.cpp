#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    int pre = 0;
    vector<string> l;
    string buffer;
    istringstream iss(s);
    
    while (getline(iss, buffer, ' ')) {
        l.push_back(buffer);
    }
    
    for (auto i : l) {
        if (i == "Z") { answer -= pre; }
        else {
            int a = stoi(i);
            pre = a; answer += a;
        }
    }
    
    
    return answer;
}
