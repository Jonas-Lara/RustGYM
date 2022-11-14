#include <iostream>
#include <string>
#include <vector>

using namespace std;

int lengthOfLongestSubstring(string s) 
{
        int ans = 0, start = -1;
        vector<int> m(128, -1);
        for (int i = 0; i < s.size(); ++i) 
        {
            start = max(start, m[s[i]]);
            m[s[i]] = i;
            ans = max(ans, i - start);
        }
        return ans;
}

int main()
{
    string s = "abcabcbb";
    cout << "Result: "<< lengthOfLongestSubstring(s) << endl;
    
    return 0;
}