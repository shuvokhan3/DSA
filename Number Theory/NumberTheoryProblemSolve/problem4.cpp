#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to calculate GCD of two numbers
int gcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        // Check if there exists a pair with GCD <= 2
        bool beautiful = false;
        for (int i = 0; i < n && !beautiful; i++) {
            for (int j = i + 1; j < n && !beautiful; j++) {
                if (gcd(arr[i], arr[j]) <= 2) {
                    beautiful = true;
                }
            }
        }
        
        cout << (beautiful ? "Yes" : "No") << endl;
    }
    
    return 0;
}