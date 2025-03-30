#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<string> words(n);
        for (int i = 0; i < n; i++) {
            cin >> words[i];
        }
        
        int totalLength = 0;
        int wordCount = 0;
        
        for (int i = 0; i < n; i++) {
            // Check if adding the current word exceeds the strip capacity
            if (totalLength + words[i].length() <= m) {
                totalLength += words[i].length();
                wordCount++;
            } else {
                break; // Stop if we can't fit more words
            }
        }
        
        cout << wordCount << endl;
    }
    
    return 0;
}