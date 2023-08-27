#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string ret =  "";
    int mode = 0;
    
    for (int i = 0; i < code.length(); ++i){
        char c = code[i];
        
        if (mode == 0) {
            if (c != '1' and i % 2 == 0) {ret += c;}
            if (c == '1') {mode = 1;}
        } else {
            if (c != '1' and i % 2 == 1) {ret += c;}
            if (c == '1') {mode = 0;}
        }
    }
    if (ret == "") {ret = "EMPTY";}
    return ret;
}
