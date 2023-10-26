#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for (auto i : myString) {
        char cur = i;
        if ('A' <= cur and cur <= 'Z') {
            cur += 32;
        }
        answer += cur;
    }
    return answer;
}
