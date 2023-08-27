#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    
    for (int i = 0; i < queries.size(); i++) {
        int o = queries[i][0];
        int j = queries[i][1];
        
        int ao = arr[o];
        int aj = arr[j];
        
        arr[o] = aj;
        arr[j] = ao;
    }
    return arr;
}
