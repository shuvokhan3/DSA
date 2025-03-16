#include <iostream>
using namespace std;

int minScreens(int x, int y) {
    // No apps case
    if (x == 0 && y == 0) return 0;
    
    // After careful analysis of the grid constraints:
    // A 5×3 grid can fit at most 2 2×2 icons optimally
    // This gives us 15 - 2*4 = 7 cells for 1×1 icons
    
    // Calculate minimum screens for 2×2 icons
    int screens_for_large = (y + 1) / 2; // Ceiling division (y/2)
    
    // Calculate cells available for 1×1 icons
    int total_cells = screens_for_large * 15;
    int used_by_large = y * 4;
    int remaining_cells = total_cells - used_by_large;
    
    // If we need more space for 1×1 icons
    if (x > remaining_cells) {
        int extra_small = x - remaining_cells;
        int extra_screens = (extra_small + 14) / 15; // Ceiling division
        return screens_for_large + extra_screens;
    }
    
    return screens_for_large;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x, y;
        cin >> x >> y;
        cout << minScreens(x, y) << endl;
    }
    
    return 0;
}