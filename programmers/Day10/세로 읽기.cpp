#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    string temp;
    
    for (int i = 0; i < my_string.length(); i++) {
        temp += my_string[i];
        if ((i + 1) % m == 0) { answer += temp[c - 1]; temp = ""; } 
    }
    
    return answer;
}
