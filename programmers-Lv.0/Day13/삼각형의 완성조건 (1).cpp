#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int max_num = 0;
    int sum_sides = 0;
    
    for (int i : sides) {
        if (i > max_num) { max_num = i; }
        sum_sides += i;
    }
    
    if (max_num >= (sum_sides - max_num)) { answer = 2; }
    else { answer = 1; }
    
    return answer;
}
