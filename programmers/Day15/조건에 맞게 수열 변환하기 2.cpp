#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    vector<int> pre;
    
    while ( 1 ) {
        vector<int> tmp;
        
        pre = arr;
        answer++;
        
        for (auto i : arr) {
           if (i >= 50 and i % 2 == 0) { tmp.push_back(i / 2); }
           else if (i < 50 and i % 2 == 1) { tmp.push_back(i * 2 + 1); } 
           else { tmp.push_back(i); }
        }
        
        arr = tmp;       
        if ( pre == arr ) { break; }
    }
    
    return answer - 1;
}
