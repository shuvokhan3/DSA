#include <iostream>
#include <string>
using namespace std;

long long countOrdinaryNumbers(long long n) {
    string n_str = to_string(n);
    int len = n_str.length();
    
    // Count ordinary numbers with fewer digits than n
    long long count = 9 * (len - 1);
    
    // Check ordinary numbers with same length as n
    for (int digit = 1; digit <= 9; digit++) {
        string ord(len, '0' + digit);
        long long ord_num = stoll(ord);
        
        if (ord_num <= n) {
            count++;
        } else {
            break; // No need to check larger digits
        }
    }
    
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;
        cout << countOrdinaryNumbers(n) << endl;
    }
    
    return 0;
}