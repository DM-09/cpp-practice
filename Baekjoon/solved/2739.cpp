#include <string>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < 9; i++) {
        cout << n << " * " << i+1 << " = " << (i+1) * n << "\n";
    }
}