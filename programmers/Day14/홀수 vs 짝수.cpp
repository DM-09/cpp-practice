#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int add, even = 0;
    for (int i = 0; i < num_list.size(); i++) {
        if (i % 2 == 0) { even += num_list[i]; }
        else { add += num_list[i]; }
    }
    return max(add, even);
}
