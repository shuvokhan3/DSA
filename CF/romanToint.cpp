#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s)
{
    unordered_map<char, int> romanValues = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}};

    int total = 0;
    for (int i = 0; i < s.size() - 1; ++i)
    {
        int current = romanValues[s[i]];
        int next = romanValues[s[i + 1]];
        if (current < next)
        {
            total -= current;
        }
        else
        {
            total += current;
        }
    }
    total += romanValues[s.back()];
    return total;
}
int main (){
    string s;
    cin>>s;
    romanToInt(s);
    return 0;
}
