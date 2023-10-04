#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    
    for (auto i : vector<int>(arr.begin() + intervals[0][0], arr.begin() + intervals[0][1] + 1)) {
        answer.push_back(i);
    }
    
    for (auto i : vector<int>(arr.begin() + intervals[1][0], arr.begin() + intervals[1][1] + 1)) {
        answer.push_back(i);
    }
    
    return answer;
}
