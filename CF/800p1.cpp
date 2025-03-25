#include <iostream>
#include <vector>
using namespace std;

void findUniqueIndex() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // Check first three elements to determine the common number
        int common;
        if (a[0] == a[1] || a[0] == a[2]) {
            common = a[0];
        } else {
            common = a[1];
        }
        
        // Find the unique element
        for (int i = 0; i < n; i++) {
            if (a[i] != common) {
                cout << i + 1 << endl; // Output 1-based index
                break;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    findUniqueIndex();
    
    return 0;
}