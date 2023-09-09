#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    if(a == b and b == c and c == d){
        answer = 1111 * a;
    }else if(a == b and b == c and c != d){
        answer = (10 * a + d) * (10 * a + d);
    }else if(a == b and b == d and d != c){
        answer = (10 * a + c) * (10 * a + c);
    }else if(a == c and c == d and d != b){
        answer = (10 * a + b) * (10 * a + b);
    }else if(b == c and c == d and d != a){
        answer = (10 * b + a) * (10 * b + a);
    }else if(a == b and c == d){
        answer = (a + c) * abs(a - c);
    }else if(a == c and b == d){
        answer = (a + b) * abs(a - b);
    }else if(a == d and c == b){
        answer = (a + b) * abs(a - b);
    }else if(a == b){
        answer = c * d;
    }else if(a == c){
        answer = b * d;
    }else if(a == d){
        answer = b * c;
    }else if(b == c){
        answer = a * d;
    }else if(b == d){
        answer = a * c;
    }else if(c == d){
        answer = a * b;
    }else{
        answer = min(min(a, b), min(c, d));
    }
    return answer;
}
