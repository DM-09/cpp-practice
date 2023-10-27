#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    vector<int> box;
    vector<int> l;
    
    int answer = -2;
    int val = 0;
    
    for (auto i : array) {
        int c = count(array.begin(), array.end(), i);
        if (c > val and answer != i) { answer = i; val = c; }
        
        if (count(l.begin(), l.end(), i) == 0) { box.push_back(c); } 
        l.push_back(i);
    }
    
    if (count(box.begin(), box.end(), val) != 1) { answer = -1; }
    
    return answer;
}
