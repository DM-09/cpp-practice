#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    int answer = 0;
    string a = ineq + eq;
        
    if (a == ">=" and n >= m) {answer = 1;}
    else if (a == "<=" and n <= m) {answer = 1;}
    else if (a == ">!" and n > m) {answer = 1;}
    else if (a == "<!" and n < m) {answer = 1;}
    
    return answer;
}
