double myPow(double x, int n) {
    if (n == 0) return 1.0;
    
    // Handle negative exponent and INT_MIN case
    long long N = n;
    if (N < 0) {
        x = 1 / x;
        N = -N;
    }
    
    double result = 1.0;
    while (N > 0) {
        // If N is odd, multiply x with result
        if (N % 2 == 1) {
            result *= x;
        }
        // Square the base and halve the exponent
        x *= x;
        N /= 2;
    }
    return result;
}