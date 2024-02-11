#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    vector<int> tmp;
    
    for (auto i : num_list) {
        tmp.push_back(i);
        if (tmp.size() == n) { answer.push_back(tmp); tmp.clear(); }
    }
    return answer;
}
