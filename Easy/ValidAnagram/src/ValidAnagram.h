
#include <map>
#include <string>

using namespace std;

class ValidAnagram {
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
            return false;
        
        if (s.length() == 0)
            return true;
        
        map<char, int> charCntsS;
        for (int i=0; i<s.length(); ++i)
            charCntsS[s[i]] += 1;
        
        map<char, int> charCntsT;
        for (int i=0; i<t.length(); ++i)
            charCntsT[t[i]] += 1;
        
        map<char, int>::iterator it;
        for (it=charCntsS.begin(); it!=charCntsS.end(); ++it)
        {
            if (charCntsT[it->first] != it->second)
                return false;
        }
        
        return true;
    }
};
