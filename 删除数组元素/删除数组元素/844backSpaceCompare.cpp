#include<string>
class Solution {
public:
    static bool backspaceCompare(std::string s, std::string t) {
        int left = 0, right = left;
        int len = s.size();
        for (; right <len;right++) {
            if (s[right] != '#') s[left++] = s[right];
            else left = left - 1 < 0 ? 0 : left - 1;
        }
        std::string::iterator it;
        for (it = s.begin()+left; it != s.end();) {
            s.erase(it);
        }
        left = 0;
        len = t.size();
        for (right=0; right < len; right++) {
            if (t[right] != '#') t[left++] = t[right];
            else left = left - 1 < 0 ? 0 : left - 1;
        }
        for (it = t.begin() + left; it != t.end();) {
            t.erase(it);
        }
        //比较是否相等
        if (s == t) return true;
        return false;
    }
};
 
//int main() {
//   std::string s = "ab#c", t = "ad#c";
//   bool re=Solution::backspaceCompare(s, t);
//}