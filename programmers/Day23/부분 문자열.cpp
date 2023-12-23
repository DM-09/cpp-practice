#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    return max(str1.find(str2) == string::npos ? 0 : 1, str2.find(str1) == string::npos ? 0 : 1);
}
