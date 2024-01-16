#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    for (auto i : to_string(age)) {
        answer += char(int(i) + 49);
    }
    return answer;
}
