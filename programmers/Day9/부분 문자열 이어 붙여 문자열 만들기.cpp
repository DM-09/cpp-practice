#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    
    for (int i = 0; i < my_strings.size(); i++) {
        string cm = my_strings[i];
        vector<int> c = parts[i];
        
        for (int j = c[0]; j <= c[1]; j++) {
            answer += cm[j];
        } 
    }
    
    return answer;
}
