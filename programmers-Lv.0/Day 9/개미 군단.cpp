#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int hp) {
    int answer = 0;
    
    for (auto i : vector<int> {5, 3, 1}) {
        int a = hp / i;
        answer += a;
        hp -= a * i;
    }
    
    return answer;
}
