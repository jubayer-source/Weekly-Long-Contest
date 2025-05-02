#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int minOneBurle = n;

        for (int a = 0; a <= n / 5; ++a) {
            for (int b = 0; b <= n / 3; ++b) {
                int total = a * 5 + b * 3;
                if (total <= n) {
                    int remaining = n - total;
                    minOneBurle = min(minOneBurle, remaining);
                }
            }
        }

        cout << minOneBurle << endl;
    }

    return 0;
}