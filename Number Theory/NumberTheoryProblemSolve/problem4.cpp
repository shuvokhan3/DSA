#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

// Get prime factorization of a number
map<int, int> getPrimeFactors(int num) {
    map<int, int> factors;
    
    // Handle 2 as a special case
    while (num % 2 == 0) {
        factors[2]++;
        num /= 2;
    }
    
    // Handle odd prime factors
    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            factors[i]++;
            num /= i;
        }
    }
    
    // If num is a prime number greater than 2
    if (num > 1) {
        factors[num]++;
    }
    
    return factors;
}

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // For each element, keep only those prime factors with odd powers
    vector<map<int, int>> oddFactors(n);
    
    for (int i = 0; i < n; i++) {
        map<int, int> factors = getPrimeFactors(a[i]);
        for (auto& [prime, power] : factors) {
            if (power % 2 == 1) {
                oddFactors[i][prime] = 1; // We only care if it's odd, not the exact count
            }
        }
    }
    
    // If any element has odd prime factors, we can form a subsequence with that element
    for (int i = 0; i < n; i++) {
        if (!oddFactors[i].empty()) {
            cout << "YES" << endl;
            return;
        }
    }
    
    // If all elements are perfect squares (have no odd prime factors),
    // then all subsequences will also be perfect squares
    cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}