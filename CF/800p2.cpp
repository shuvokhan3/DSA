#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cards(n);
    
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }
    
    int left = 0, right = n - 1;
    int sereja = 0, dima = 0;
    bool serejaTurn = true;
    
    while (left <= right) {
        if (cards[left] > cards[right]) {
            if (serejaTurn) sereja += cards[left];
            else dima += cards[left];
            left++;
        } else {
            if (serejaTurn) sereja += cards[right];
            else dima += cards[right];
            right--;
        }
        
        serejaTurn = !serejaTurn;
    }
    
    cout << sereja << " " << dima << endl;
    return 0;
}
