#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    int len = arr.size();
    int n = 1;
    
    for (int i = 0; n < len; i++) { n *= 2; }
    for (int i = 0; i < (n - len); i++) { answer.push_back(0); }
    
    return answer;
}
