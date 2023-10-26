#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    vector<string> zip;
    string answer = "";
    string tmp;
    string last;
    
    for (int i = 0; i < pat.length(); i++) { last += " "; }
    
    for (auto i : myString) {
        tmp += i;
        
        string temp;
        for (int j = 0; j < last.length() - 1; j++) { temp += last[j + 1]; }
        last = temp + i;
        
       if (last == pat) {
           zip.push_back(tmp);
           tmp = ""; 
       } 
    }
    
    for (auto i : zip) { answer += i; }
    
    return answer;
}
