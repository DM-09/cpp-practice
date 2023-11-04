#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    int a = arr1.size();
    int b = arr2.size();
    
    if (a > b) { answer = 1; }
    else if (a < b) { answer = -1; }
    else {
        a=b=0;
        for (int i : arr1) { a += i; }
        for (int i : arr2) { b += i; }
        
        if (a > b) { answer = 1; }
        else if (a < b) { answer = -1; }
    }
    
    return answer;
}
