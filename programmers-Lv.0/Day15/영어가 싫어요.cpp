#include <cmath>
#include <string>
#include <vector>
#include <map>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    map<string, string> m = {{"one", "1"}, {"two", "2"}, {"three", "3"}, {"four", "4"}, {"five", "5"}, {"six", "6"}, {"seven", "7"}, {"eight", "8"}, {"nine", "9"}, {"zero", "0"}};
    string s;
    string d;
    
    for (auto i : numbers) {
        s += i;
        if (m.find(s) != m.end()) { d += m[s]; s = ""; }
    }
    
    for (int i = 0; i < d.length(); i++) {
        answer += (d[i] - '0') * (pow(10, d.length() - i - 1));
    }
    
    return answer;
}
