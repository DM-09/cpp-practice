#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    string s;
    
    for (auto i : myString) {
        if (i == 'A') { s += "B"; }
        else { s += "A"; }
    }
    
    if (s.find(pat) != string::npos) { answer = 1; }
    
    return answer;
}
