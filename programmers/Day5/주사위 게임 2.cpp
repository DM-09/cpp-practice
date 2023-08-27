#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c) {
    int an = 0;
    
    if (a != b and b != c and a != c) {an = a + b + c;}
    if (a == b or a == c or b == c) {an = (a + b + c) * (a * a + b * b + c * c);}
    if (a == b and b == c) {an *= (a * a * a  +  b * b * b  +  c * c * c);}
    
    return an;
}
