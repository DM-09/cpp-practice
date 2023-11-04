#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    int mode = 0;
    
    if (arr.size() % 2 == 0) { mode = 1; }
    
    for (int i = 0; i < arr.size(); i++) {
        if (mode and i % 2 == 1) { arr[i] += n; }
        else if (!mode and i % 2 == 0) { arr[i] += n; }
    }
    
    answer = arr;
    
    return answer;
}
