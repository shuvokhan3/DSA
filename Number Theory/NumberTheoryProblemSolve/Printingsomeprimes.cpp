#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int MAX = 100000000; // 10^8
const int SQRT_MAX = 10000; // sqrt(10^8)

int main() {
    // Use bool array with false for prime, true for composite (not prime)
    // Only store odd numbers to halve memory usage
    vector<bool> sieve(MAX/2 + 1, false);
    
    // Sieve of Eratosthenes (optimized)
    for (int i = 3; i <= SQRT_MAX; i += 2) {
        if (!sieve[i/2]) {
            // Mark all odd multiples of i as non-prime
            for (long long j = (long long)i * i; j <= MAX; j += 2 * i) {
                sieve[j/2] = true;
            }
        }
    }
    
    // Print the first prime (2)
    cout << 2 << endl;
    
    // Count and print primes at positions 1, 101, 201, ...
    int count = 1; // Already counted 2
    
    for (int i = 3; i <= MAX; i += 2) {
        if (!sieve[i/2]) {
            count++;
            // Print if it's at position 1, 101, 201, ...
            if (count % 100 == 1) {
                cout << i << endl;
            }
        }
    }
    
    return 0;
}