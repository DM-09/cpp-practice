#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int a = 1;
    int b = 0;
    
    for (int i = 0; i < num_list.size(); i++) {
        int c = num_list[i];
        a *= c;
        b += c;
    }
    
    return a > b * b ? 0 : 1;
}
