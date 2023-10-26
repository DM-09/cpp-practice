#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    
    for (int j = 0; j < strArr.size(); j++) {
        int mode = 0;
        string s = strArr[j];
        string tmp;
        if (j % 2 == 0) {mode = 1;}
        for (char i : s) {
            char cur = i;
            if ('A' <= i and i <= 'Z' and mode) { cur += 32; }
            else if ('a' <= i and i <= 'z' and !mode) { cur -= 32; }
            tmp += cur;
        }
        
        answer.push_back(tmp);
    }
    
    return answer;
}
