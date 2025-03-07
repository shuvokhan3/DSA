#include<bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> charIndex;
    int maxLength = 0, start = 0;

    for (int i = 0; i < s.length(); i++) {
        if (charIndex.find(s[i]) != charIndex.end()) {
            start = max(start, charIndex[s[i]] + 1);
        }
        
        charIndex[s[i]] = i;
        maxLength = max(maxLength, i - start + 1);
    }

    return maxLength;
}
int main (){
    string str;
    cin>>str;
    lengthOfLongestSubstring(str);
    return 0;
}