#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> solve_piaju_problem(long long P, long long L) {
    long long consumed = P - L;  // Total piajus consumed
    vector<long long> valid_Q_values;
    
    // Find all divisors of (P-L) and check L < Q constraint
    for (long long i = 1; i * i <= consumed; i++) {
        if (consumed % i == 0) {
            // i is a divisor (represents number of contestants C)
            long long Q = consumed / i;  // piajus per contestant
            
            if (L < Q) {
                valid_Q_values.push_back(Q);
            }
            
            // Check the paired divisor if different
            if (i != Q) {
                long long other_Q = i;  // other possibility for piajus per contestant
                if (L < other_Q) {
                    valid_Q_values.push_back(other_Q);
                }
            }
        }
    }
    
    // Sort Q values in ascending order
    sort(valid_Q_values.begin(), valid_Q_values.end());
    
    return valid_Q_values;
}

int main() {
    int T;
    cin >> T;
    
    for (int case_num = 1; case_num <= T; case_num++) {
        long long P, L;
        cin >> P >> L;
        
        vector<long long> results = solve_piaju_problem(P, L);
        
        cout << "Case " << case_num << ": ";
        if (results.empty()) {
            cout << "impossible" << endl;
        } else {
            for (size_t i = 0; i < results.size(); i++) {
                cout << results[i];
                if (i < results.size() - 1) {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    
    return 0;
}