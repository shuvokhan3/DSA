#include <iostream>
#include <queue>
#include <set>

using namespace std;

int findUglyNumber(int n) {
    priority_queue<long, vector<long>, greater<long>> pq;
    set<long> seen;
    pq.push(1);
    seen.insert(1);

    long ugly = 1;
    int factors[] = {2, 3, 5};
    
    for (int i = 1; i < n; ++i) {
        ugly = pq.top();
        pq.pop();
        
        for (int factor : factors) {
            long nextUgly = ugly * factor;
            if (seen.find(nextUgly) == seen.end()) {
                seen.insert(nextUgly);
                pq.push(nextUgly);
            }
        }
    }
    
    return ugly;
}

int main() {
    int n = 1500;
    cout << "The 1500'th ugly number is " << findUglyNumber(n) << "." << endl;
    return 0;
}
