#include <map>
#include <string>

using namespace std;
class RomanToInt {
public:
    void init()
    {
        if (romToInt.empty())
        {
            romToInt['I'] = 1;
            romToInt['V'] = 5;
            romToInt['X'] = 10;
            romToInt['L'] = 50;
            romToInt['C'] = 100;
            romToInt['D'] = 500;
            romToInt['M'] = 1000;
        }
    }
    
    bool isModified(char prev, char curr)
    {
        // check for IV and IX
        if (prev == 'I' && (curr == 'V' || curr == 'X'))
            return true;
            
        // check for XL and XC
        if (prev == 'X' && (curr == 'L' || curr == 'C'))
            return true;
            
        // check for CD and CM
        if (prev == 'C' && (curr == 'D' || curr == 'M'))
            return true;
            
        return false;
    }
    
    int romanToInt(string s)
    {
        init();
        
        int convertedValue = 0;
        for (int i=0; i<s.length(); ++i)
        {
            convertedValue += romToInt[s[i]];
            
            if (i != 0)
            {
                if (isModified(s[i-1], s[i]))
                {
                    convertedValue = convertedValue - romToInt[s[i-1]] - romToInt[s[i-1]];
                }
            }
        }
        
        return convertedValue;
    }
private:
    map<char, int> romToInt;
};
