#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    bool odd = true;
    
    if (n % 2 == 0) {odd = false;}
        
    for (int i = 1; i < n + 1; i++) {
        if (odd and i % 2 == 1) {answer += i;}
        if (!odd and i % 2 == 0) {answer += i * i;}
    }
    return answer;
}
