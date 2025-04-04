#include<bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Read the input
    long long n;
    cin >> n;
    
    // For any n >= 2, the last two digits of 5^n are always 25
    // This is because:
    // 5^1 = 5
    // 5^2 = 25
    // 5^3 = 125 (last two digits: 25)
    // 5^4 = 625 (last two digits: 25)
    // ...and this pattern continues
    
    if (n == 1) {
        cout << "05" << std::endl;
    } else {
        cout << "25" << std::endl;
    }
    
    return 0;
}