#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> arr) {
    int answer = 1;
    int end = 0;
    int n = arr.size();
    
    for (int i = 0; i < n; i++) {
        if (end) { break; }
        for (int j = 0; j < n; j++) {
            if (arr[i][j] != arr[j][i]) { answer = 0; end = 1; break; }
        }
    }
    
    return answer;
}
