#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer; 
    string al = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    
    for (int i = 0; i < 52; i++) {
        answer.push_back(count(my_string.begin(), my_string.end(), al[i]));
    }
    return answer;
}
