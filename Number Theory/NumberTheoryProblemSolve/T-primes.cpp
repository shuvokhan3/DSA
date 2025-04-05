#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAX = 1e6 + 1;
bitset<MAX> isPrime;
vector<ll> primeSquares;

void sieve() {
    isPrime.set(); // set all bits to true
    isPrime[0] = isPrime[1] = 0;

    for (ll i = 2; i * i < MAX; ++i) {
        if (isPrime[i]) {
            for (ll j = i * i; j < MAX; j += i)
                isPrime[j] = 0;
        }
    }

    // Store squares of primes
    for (ll i = 2; i < MAX; ++i) {
        if (isPrime[i]) {
            primeSquares.push_back(i * i);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();
    unordered_set<ll> tPrimes(primeSquares.begin(), primeSquares.end());

    int n;
    cin >> n;
    while (n--) {
        ll x;
        cin >> x;
        cout << (tPrimes.count(x) ? "YES" : "NO") << '\n';
    }

    return 0;
}
