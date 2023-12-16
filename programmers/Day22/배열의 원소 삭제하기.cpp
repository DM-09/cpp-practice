#include <string>
#include <vector>

using namespace std;

vector<int> remove_arr(vector<int> arr, int flag) {
    vector<int> l;
    
    for (auto i : arr) {
        if (i != flag) { l.push_back(i); }
    }
    
    return l;
}

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    
    for (auto i : delete_list) {
        arr = remove_arr(arr, i);
    }
    
    answer = arr;
    return answer;
}
