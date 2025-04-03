#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to find least prime factor of a number
int lpf(int n) {
    if (n % 2 == 0) return 2;
    
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return i;
    }
    
    return n; // n is prime
}

// Function to find greatest prime factor of a number
int gpf(int n) {
    int max_prime = 1;
    
    // Check if n is divisible by 2
    while (n % 2 == 0) {
        max_prime = 2;
        n /= 2;
    }
    
    // Check for all possible odd prime factors
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            max_prime = i;
            n /= i;
        }
    }
    
    // If n is a prime number greater than 2
    if (n > 2) max_prime = n;
    
    return max_prime;
}

// Function to count distinct prime factors ω(n)
int distinct_prime_factors(int n) {
    int count = 0;
    
    // Check if n is divisible by 2
    if (n % 2 == 0) {
        count++;
        while (n % 2 == 0) n /= 2;
    }
    
    // Check for all possible odd prime factors
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            count++;
            while (n % i == 0) n /= i;
        }
    }
    
    // If n is a prime number greater than 2
    if (n > 2) count++;
    
    return count;
}

// Function to count total prime factors Ω(n)
int total_prime_factors(int n) {
    int count = 0;
    
    // Count all 2s
    while (n % 2 == 0) {
        count++;
        n /= 2;
    }
    
    // Count all odd prime factors
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            count++;
            n /= i;
        }
    }
    
    // If n is a prime number greater than 2
    if (n > 2) count++;
    
    return count;
}

// Function to count number of divisors d(n)
int count_divisors(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            // If divisors are equal, count only one
            if (n / i == i) count++;
            else count += 2; // Otherwise count both
        }
    }
    return count;
}

// Function to calculate sum of divisors σ(n)
int sum_divisors(int n) {
    int sum = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            // If divisors are not equal, add the other divisor
            if (n / i != i) sum += n / i;
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        cout << lpf(num) << " " << gpf(num) << " " 
             << distinct_prime_factors(num) << " " << total_prime_factors(num) << " " 
             << count_divisors(num) << " " << sum_divisors(num) << endl;
    }
    
    return 0;
}