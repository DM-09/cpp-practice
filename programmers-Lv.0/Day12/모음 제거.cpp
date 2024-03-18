#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    string a = "aeiou";
    for (char i : my_string) {
      if (a.find(i) == string::npos){ answer += i; }
    }
    return answer;
}
