#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string d = "1234567890";
    
    for (auto i : my_string) {
      if (d.find(i) != string::npos) { answer += i - '0'; }    
    }
    return answer;
}
