#include <bits/stdc++.h>
using namespace std;

long long digit_sum(long long n) {
    long long s = 0;
    while(n) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        long long x;
        cin >> x;

        int cnt = 0;
        for (long long y = x + 1; y <= x + 90; y++) {
            if (y - digit_sum(y) == x)
                cnt++;
        }

        cout << cnt << "\n";
    }
}

//SECOND LAST MULTIPLE OF 9 -> 9*11 - 9 ->9*22 - 9