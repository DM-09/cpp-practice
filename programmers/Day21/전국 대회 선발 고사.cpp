#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    vector<int> l;
    vector<int> v;
    
    for (int i = 0; i < rank.size(); i++) {
        if (attendance[i]) { l.push_back(rank[i]); }
    }
    
    sort(l.begin(), l.end());
    
    for (int i = 0; i < 3; i++ ) { v.push_back(l[i]); }
    
    int a = find(rank.begin(), rank.end(), v[0]) - rank.begin();
    int b = find(rank.begin(), rank.end(), v[1]) - rank.begin();
    int c = find(rank.begin(), rank.end(), v[2]) - rank.begin();
        
    answer = 10000 * a + 100 * b + c;
    
    return answer;
}
