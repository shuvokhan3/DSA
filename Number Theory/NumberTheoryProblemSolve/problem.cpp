#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int P;
        cin >> P;

        // Always works: 2 and P - 1
        // Because: P % 2 = 1 and P % (P - 1) = 1
        cout << 2 << " " << P - 1 << endl;
    }

    return 0;
}
