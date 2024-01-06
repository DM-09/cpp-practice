#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for (auto i : myString) {
        if (('a' <= i and i < 'l') or ('A' <= i and i < 'L')) { answer += 'l'; }
        else { answer += i; }
    }
    return answer;
}
