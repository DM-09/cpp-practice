#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int order) {
    int answer = 0;
    vector<char> l;
    string s = to_string(order);
    
    for (auto i : s) { l.push_back(i); }
    
    answer = count(l.begin(), l.end(), '3') + count(l.begin(), l.end(), '6') + count(l.begin(), l.end(), '9');
    
    return answer;
}
