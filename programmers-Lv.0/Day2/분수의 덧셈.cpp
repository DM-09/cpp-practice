#include <string>
#include <vector>

using namespace std;

int gcd(int n, int m) {
    int x = n % m;
    while (x != 0) { n = m; m = x; x = n % m; }
    return m;
}

int lcm(int n, int m) { return (n * m) / gcd(n, m); }

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int lcm_num = lcm(denom1, denom2);
    
    int numer = numer1 * (lcm_num / denom1) + numer2 * (lcm_num / denom2);
    int denom = lcm_num;
    
    int gcd_num = gcd(numer, denom);
    
    answer.push_back(numer / gcd_num);
    answer.push_back(denom / gcd_num);
    
    return answer;
}
