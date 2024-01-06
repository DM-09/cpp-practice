#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    
    for (auto i : order) {
        if (i == "iceamericano" or i == "americanoice" or i == "hotamericano" or i == "americanohot" or i == "americano" or i == "anything") { answer += 4500; }
        else { answer += 5000; }
    }
    
    return answer;
}
