#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int a, b;
  long double n;
  
  cin >> a >> b;
  n = floor(b * log10(a)) + 1;
  
  cout << int(n);
  
  return 0;
}
