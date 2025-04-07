#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the value y that maximizes gcd(x,y) + y
int solve(int x) {
    int max_val = 0;
    int result = 1;
    
    // For each possible y value
    for (int y = 1; y < x; y++) {
        // Calculate gcd(x, y)
        int a = x, b = y;
        while (b) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        int gcd = a;
        
        // Check if this gives a better result
        if (gcd + y > max_val) {
            max_val = gcd + y;
            result = y;
        }
    }
    
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x;
        cout << solve(x) << endl;
    }
    
    return 0;
}