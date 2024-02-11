#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int len = numbers.size();
    int cur = 0;
    
    for (int i = 1; i < k; i++) {
        cur += 2;
        cur %= len;
    }
    
    answer = numbers[cur];
    
    return answer;
}
