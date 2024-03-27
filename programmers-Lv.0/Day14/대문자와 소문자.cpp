#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for (auto i : my_string) {
        if ('a' <= i and i <= 'z') {  answer += i - 32; } 
        else { answer += i + 32; }
    }
    
    return answer;
}
