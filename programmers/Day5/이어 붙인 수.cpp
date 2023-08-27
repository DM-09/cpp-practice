#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    string odd = "";
    string even = "";
    
    for (int i = 0; i < num_list.size(); i++) {
        auto c = to_string(num_list[i]);
        stoi(c) % 2 == 0 ? even += c : odd += c;
    }
    
    return stoi(even) + stoi(odd);
}
