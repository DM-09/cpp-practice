#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;

    for(int i = 0; i < str.length(); i++){
      if (int(str[i]) <= 90) {
        cout << char(int(str[i]) + 32);
      } else {
        cout << char(int(str[i]) - 32);
      }
    }
  
    return 0;
}
