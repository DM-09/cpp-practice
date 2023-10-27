#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int mid_ind = array.size() / 2;
    
    sort(array.begin(), array.end());    
    return array[mid_ind];
}
