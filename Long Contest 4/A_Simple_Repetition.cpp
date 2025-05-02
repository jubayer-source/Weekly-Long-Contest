#include <bits/stdc++.h>
using namespace std;

// Check if a number is prime (safe up to 64-bit integers)
bool isPrime(long long n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string x;
        int k;
        cin >> x >> k;

        // Repeat x k times to form y
        string XkTimes = "";
        for (int i = 0; i < k; i++) {
            XkTimes += x;
        }

        if (XkTimes.length() > 18) {
            cout << "NO" << endl;
            continue;
        }

        long long y = stoll(XkTimes);  // Convert to integer

        if (isPrime(y)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}