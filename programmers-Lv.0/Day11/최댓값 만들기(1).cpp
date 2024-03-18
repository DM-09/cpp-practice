#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int len = numbers.size();
    
    sort(numbers.begin(), numbers.end());
    
    answer = numbers[len-1] * numbers[len-2];
    
    return answer;
}
