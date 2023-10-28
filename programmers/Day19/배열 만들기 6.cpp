#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    for (int i = 0; i < arr.size(); i++) {
        int cur = arr[i];
        
        if (answer.empty()) { answer.push_back(cur); }
        else if (answer.back() ==  cur) { answer.pop_back(); }
        else { answer.push_back(cur); }
    }
    
    if (answer.empty()) { answer.push_back(-1); }
    
    return answer;
}
