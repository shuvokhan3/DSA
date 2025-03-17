#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n, k;
        cin >> n >> k;
        
        // The problem states that k is always odd (k ≥ 3 and k is odd)
        // So we don't need to handle cases where k is even
        
        if (n % 2 == 0) {
            // If n is even, we can only subtract even numbers
            // The largest even number we can subtract is k-1
            cout << (n + k - 2) / (k - 1) << endl;
        } else {
            // If n is odd, we need to subtract an odd number first
            // After that, n becomes even, and we can use even numbers
            // The largest odd number we can subtract is k
            cout << 1 + (n - k + k - 2) / (k - 1) << endl;
            // This simplifies to: 1 + (n - 1) / (k - 1)
        }
    }
    
    return 0;
}