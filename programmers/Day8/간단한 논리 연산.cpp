#include <string>
#include <vector>

using namespace std;

bool solution(bool x1, bool x2, bool x3, bool x4) {
    if ((x1 or x2) and (x3 or x4)) {return true;}
    else {return false;}
}
