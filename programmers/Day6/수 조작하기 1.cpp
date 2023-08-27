#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    for (int i = 0; i < control.length(); i++) {
        char c = control[i];
            
        if (c == 'w') {n += 1;}
        if (c == 's') {n -= 1;}
        if (c == 'd') {n += 10;}
        if (c == 'a') {n -= 10;}
    }
    return n;
}
