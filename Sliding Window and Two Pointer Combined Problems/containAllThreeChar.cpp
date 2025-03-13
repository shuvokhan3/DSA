#include<bits/stdc++.h>
using namespace std;
int numberOfSubstrings(string s) {
    int n = s.length();
    int count = 0;
    int left = 0;
    unordered_map<char, int> freq;

    // Iterate through the string with a sliding window
    for (int right = 0; right < n; ++right) {
        freq[s[right]]++;
        
        // Check if the window contains at least one 'a', 'b', and 'c'
        while (freq['a'] > 0 && freq['b'] > 0 && freq['c'] > 0) {
            // Add all valid substrings starting from 'left'
            count += n - right;
            
            // Shrink the window from the left
            freq[s[left]]--;
            left++;
        }
    }
    return count;


}
int main (){
    string s;
    cin>>s;
    cout<<numberOfSubstrings(s);
    return 0;
}