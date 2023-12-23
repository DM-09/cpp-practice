#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    int x, y;
    
    x =  a % 2 == 0 ? 1 : 0;
    y =  b % 2 == 0 ? 1 : 0;
        
    if (x == y and y == 0) { answer = a * a + b * b; }
    else if (x == 0 or y == 0) { answer = 2 * (a + b); }
    else { answer = abs(a - b); }
    
    return answer;
}
