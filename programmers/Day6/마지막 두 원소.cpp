#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int len = num_list.size();
    int last = num_list[len - 1];
    int tlast = num_list[len - 2];
    
    num_list.push_back(last > tlast ? last - tlast : last * 2);
        
    return num_list;
}
