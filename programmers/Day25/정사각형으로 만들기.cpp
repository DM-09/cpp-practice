#include <string>
#include <vector>

using namespace std;

int max(int a, int b) {
    if (a > b) { return a; }
    return b;
}

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer;
    int a = arr.size();
    int b = 0;
    
    for (auto i : arr) { b = max(b, i.size()); }
    
    if (a > b) {
        int q = 0;
        for (auto i : arr) {
            for (int j = 0; j < (a - i.size()); j++) { arr[q].push_back(0); }
            q++;
        }
    } else if (b > a) {
        for (auto i : arr) {
            for (int j = 0; j < (b - i.size()); j++) { i.push_back(0); }
        }
        
        vector<int> l;
        
        for (int i = 0; i < b; i++) { l.push_back(0); }
        for (int j = 0; j < (b-a); j++) { arr.push_back(l); }
    }
    
    answer = arr;
    
    return answer;
}
