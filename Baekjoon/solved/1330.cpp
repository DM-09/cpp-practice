#include <string>
#include <iostream>

using namespace std;

int main() {
    int a, b;
    string code = "==";
    cin >> a >> b;
    
    if (a > b) { code = ">"; }
    if (a < b) { code = "<"; }
    
    cout << code;
}
