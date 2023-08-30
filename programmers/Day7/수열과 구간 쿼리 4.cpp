#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    
    for (int i=0; i < queries.size(); i++) {
        vector<int> q = queries[i];
        
        for (int j=0; j < arr.size(); j++) {
           if (q[0] <= j and j <= q[1] and j % q[2] == 0) { arr[j] += 1;}
        }
    }
    
    vector<int> answer = arr;
    
    return answer;
}
