#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> l;
    for (auto q : queries) {
        int s = q[0];
        int e = q[1];
        int k = q[2];
        
        int m = 100000000;
        
        for (auto v : vector<int>(arr.begin() + s, arr.begin() + e + 1)) {
            if (v > k and v < m) {m = v;}
        }
        
        if (m == 100000000) {m = -1;}
        l.push_back(m);
    }
    return l;
}
