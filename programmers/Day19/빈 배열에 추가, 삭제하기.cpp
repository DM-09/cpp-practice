#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> answer;
    
    for (int i = 0; i < arr.size(); i++) {
        bool f = flag[i];
        int n = arr[i];
        
        if (f) {
            for (int j = 0; j < n * 2; j++) { answer.push_back(n); }
        } else {
            for (int j = 0; j < n; j++) { answer.pop_back(); }
        }
    }
    
    return answer;
}
