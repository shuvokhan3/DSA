#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        // For the equation a = n - b to be true where a and b are positive integers,
        // we need: a > 0 and b > 0
        // This means: n - b > 0 and b > 0
        // So: b < n and b > 0
        // Therefore, b can be any integer from 1 to n-1
        
        // The number of such pairs is simply n-1
        cout << n - 1 << endl;
    }
    
    return 0;
}