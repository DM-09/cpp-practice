#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int b = 1;
    int i = 1;
    
    while(1) {
        if (b > n) { answer = i-2; break; }
        b *= i;
        i++;
    }
    return answer;
}
