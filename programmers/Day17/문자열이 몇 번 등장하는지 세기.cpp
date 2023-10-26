#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    int len = pat.length();
    
    for (int i = 0; i < myString.length(); i++) {
        string tmp;
        
        for (int j = 0; j < len; j++) { tmp += myString[i + j]; }
        if (tmp == pat) { answer++; }
    }
    
    return answer;
}
