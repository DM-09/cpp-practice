#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int start = 1000000;
    int end = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 2) {
            if (i < start) { start = i; }
            if (i > end) { end = i; }
        }
    }
    
    if (end == -1) { answer.push_back(-1); }
    else {answer = vector<int>(arr.begin() + start, arr.begin() + end + 1);}
    return answer;
}
