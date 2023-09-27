#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string my_string, string is_suffix) {
    for (int i = 0; i < my_string.length(); i++) {
        if (my_string.substr(my_string.length() - i - 1) == is_suffix) {return 1;}
    }
    
    return 0;
}
