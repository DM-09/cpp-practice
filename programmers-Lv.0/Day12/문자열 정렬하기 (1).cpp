#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    string d = "1234567890";
    
    for (auto i : my_string) {
        if (d.find(i) != string::npos) {
            answer.push_back(i - '0');
        }
    }
    
    sort(answer.begin(), answer.end());
    return answer;
}
