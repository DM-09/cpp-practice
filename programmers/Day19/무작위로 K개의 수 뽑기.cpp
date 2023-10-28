#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    
    for (auto i : arr) {
        if (find(answer.begin(), answer.end(), i) == answer.end() and answer.size() < k) 
        { answer.push_back(i); }
    }
    
    while(answer.size() < k) { answer.push_back(-1); }
    
    return answer;
}
