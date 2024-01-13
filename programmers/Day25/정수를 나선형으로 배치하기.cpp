#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    int a = n;
    int mode = 0;
    int cur = 1;
    int exit = n*n;
    int x = 0;
    int y = 0;
    int p = 0;
    
    vector<vector<int>> l;
    
    for (int i = 0; i < n; i++) {
        vector<int> v;
        for (int j = 0; j < n; j++) { v.push_back(0); }
        l.push_back(v);
    }
    
    l[y][x] = 1;
    a--;
    
    while (cur != exit) {
        if (mode == 0) {
            for (int b = 0; b < a; b++) {
                cur++; x++;
                l[y][x] = cur;
                if (cur >= exit) { break; }
            }
            if (p) { a--; }
            mode = 1; p = 1;
        } else if (mode == 1) {
            for (int b = 0; b < a; b++) {
                cur++; y++;
                l[y][x] = cur;
                if (cur >= exit) { break; }
            }
            mode = 2;
        } else if (mode == 2) {
            for (int b = 0; b < a; b++) {
                cur++; x--;
                l[y][x] = cur;
                if (cur >= exit) { break; }
            }
            mode = 3; a--;
        } else if (mode == 3) {
            for (int b = 0; b < a; b++) {
                cur++; y--;
                l[y][x] = cur;
                if (cur >= exit) { mode=4; break; }
            }
            mode = 0;
        }
    }
    
    return l;
}
