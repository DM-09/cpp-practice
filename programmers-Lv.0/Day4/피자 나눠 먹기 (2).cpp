#include <string>
#include <vector>

using namespace std;

int gcd(int n, int m) {
    int x = n % m;
    while (x != 0) { n = m; m = x; x = n % m; }
    return m;
}

int lcm(int n, int m) { return (n * m) / gcd(n, m); }

int solution(int n) {
    int answer = lcm(6, n) / 6;
    return answer;
}
