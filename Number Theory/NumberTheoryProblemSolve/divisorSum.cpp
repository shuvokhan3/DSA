#include <iostream>
#include <vector>
using namespace std;

const int MAX = 500001;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Step 1: Precompute sum of proper divisors for all numbers up to 500000
    vector<int> divSum(MAX, 0);
    
    for (int i = 1; i < MAX; ++i) {
        for (int j = 2 * i; j < MAX; j += i) {
            divSum[j] += i;
        }
    }

    // Step 2: Read input and output results
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << divSum[n] << '\n';
    }

    return 0;
}
