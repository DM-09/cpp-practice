#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    cout << to_string(a) + " + " + to_string(b) + " = " + to_string(a + b);
    return 0;
}
