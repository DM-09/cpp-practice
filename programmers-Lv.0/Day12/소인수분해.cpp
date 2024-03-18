#include <string>
#include <vector>
#include <iostream>

using namespace std;

int isPrime(int n) {
  for (int i = 2; i < n; i++) {
      if (n % i == 0) { return 0; }
  }
  return 1;
}

vector<int> solution(int n) {
    vector<int> answer;
    
    for (int i=2; i <= n; i++) {
        if (n % i == 0 and isPrime(i)) { answer.push_back(i); }
    }
    
    return answer;
}
