#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i=1; i<n+1; i++) {
        for (int j=1; j<n+1; j++) {
            if (i*j == n) { answer += 1; break; }
            if (i*j > n) { break; }
        }
    }
    return answer;
}
