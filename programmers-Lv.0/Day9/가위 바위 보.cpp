#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string rsp) {
    string answer = "";
    map<char, string> wrsp {{'2', "0"}, {'0', "5"}, {'5', "2"}};
    for (auto i : rsp) { answer += wrsp[i]; }
    return answer;
}
