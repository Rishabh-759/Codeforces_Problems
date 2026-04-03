#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;

// Fast modular exponentiation
long long modpow(long long base, long long exp, long long mod) {
    long long res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}

int main() {
    long long n;
    cin >> n;
    
    long long pow4 = modpow(4, n, MOD);
    long long pow2 = modpow(2, n, MOD);

    // Modular inverse of 2 under MOD
    long long inv2 = 500000004;  

    long long ans = ((pow4 + pow2) % MOD * inv2) % MOD;
    cout << ans << "\n";
}