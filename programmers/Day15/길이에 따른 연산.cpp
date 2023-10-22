#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 1;
    int mode = 1;
    
    if (num_list.size() >= 11) { mode = 0; answer = 0;}
    
    for (auto i : num_list) {
        if (mode) { answer *= i; }
        else { answer += i; }
    }
    
    
    return answer;
}
