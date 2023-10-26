#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for (auto i : myString) {
        if (i == 'a' or i == 'A') { answer += 'A'; }
        else if ('A' <= i and i <= 'Z') { answer += i + 32; }
        else { answer += i; }
    }
    return answer;
}
