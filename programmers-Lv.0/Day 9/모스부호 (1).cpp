#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string letter) {
    string answer = "";
      map<string, char> morse {
    {".-",'a'},{"-...",'b'},{"-.-.",'c'},{"-..",'d'},{".",'e'},{"..-.",'f'},
    {"--.",'g'},{"....",'h'},{"..",'i'},{".---",'j'},{"-.-",'k'},{".-..",'l'},
    {"--",'m'},{"-.",'n'},{"---",'o'},{".--.",'p'},{"--.-",'q'},{".-.",'r'},
    {"...",'s'},{"-",'t'},{"..-",'u'},{"...-",'v'},{".--",'w'},{"-..-",'x'},
    {"-.--",'y'},{"--..",'z'}};
    
    vector<string> l;
    string tmp;
    for (auto i : letter) {
        if (i == ' ') { l.push_back(tmp); tmp = ""; }
        else { tmp += i; }
    }
    l.push_back(tmp);
    
    for (auto i : l) {
        answer += morse[i];
    }
    
    return answer;
}
