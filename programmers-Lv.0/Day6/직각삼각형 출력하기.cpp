#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string s = "";
        
        for (int j = 0; j < i + 1; j++) { s += "*"; }
        cout << s << endl;
    }
    
    return 0;
}
