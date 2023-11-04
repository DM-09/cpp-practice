#include <string>
#include <vector>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    vector<int> l(100000, 0);
    
    for (auto i : strArr) { l[i.length()]++; }
    for (int i : l) { if (i > answer) { answer = i; } }
    
    return answer;
}
