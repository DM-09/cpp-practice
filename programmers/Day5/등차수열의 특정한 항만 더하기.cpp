#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    int curr = a;
    for (int i = 0; i < included.size(); i++) {
        if (included[i]) {answer += curr;}
        curr += d;
    }
    return answer;
}
