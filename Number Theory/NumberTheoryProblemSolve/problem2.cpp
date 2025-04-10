#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int MAX = 1e6 + 5;
vector<bool> is_prime(MAX, true);
vector<int> scary_count(MAX, 0);

// Check if a number contains digit 0
bool has_zero(int n) {
    while (n > 0) {
        if (n % 10 == 0) return true;
        n /= 10;
    }
    return false;
}

// Check if all right-truncations are prime
bool is_scary_prime(int num) {
    while (num > 0) {
        if (!is_prime[num]) return false;
        num %= (int)pow(10, (int)log10(num));
    }
    return true;
}

void precompute() {
    // Sieve of Eratosthenes
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAX; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAX; j += i)
                is_prime[j] = false;
        }
    }

    // Precompute scary primes
    for (int i = 2; i < MAX; ++i) {
        scary_count[i] = scary_count[i - 1];
        if (is_prime[i] && !has_zero(i) && is_scary_prime(i)) {
            scary_count[i]++;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    precompute();

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        cout << scary_count[N] << "\n";
    }

    return 0;
}

