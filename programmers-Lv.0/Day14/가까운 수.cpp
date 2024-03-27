#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 1000;
    int num = 1000;
    
    for (auto i : array) {
        int a = abs(n - i);
        
        if (a <= num) {
            if (num == a) { answer = min(answer, i); }
            else { num = a; answer = i; }
        }
    }
    
    return answer;
}
