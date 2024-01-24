#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> orgin = emergency;
    sort(emergency.begin(), emergency.end());
    int size = orgin.size();
    
    for (auto i : orgin) {
        for (int j = 0; j < size; j++) {
            if (emergency[j] == i) { answer.push_back(size-j); break; }
        }
    }
    
    return answer;
}
