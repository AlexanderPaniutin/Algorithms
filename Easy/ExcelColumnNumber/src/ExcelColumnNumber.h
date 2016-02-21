#include <string>

using namespace std;
class ExcelColumnNumber {
public:
    int titleToNumber(string s) {
        int colNum = 0;
        while (!s.empty())
        {
            char ch = s[0] - 64;
            colNum = colNum*26 + ch;
            
            s = s.substr(1);
        }
        return colNum;
    }
};
