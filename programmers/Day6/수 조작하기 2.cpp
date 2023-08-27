#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string a = "";
    int last = 0;
    
    for (int i = 0; i < numLog.size(); i++) {
        int c = numLog[i];
            
        if (c - last == 1) {a += "w";}
        if (c - last == -1) {a += "s";}
        if (c - last == 10) {a += "d";}
        if (c - last == -10) {a += "a";}
        
        last = c;
    }
    return a;
}
