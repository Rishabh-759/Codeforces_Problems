/* #include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    
    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < N; i++) cin >> B[i];
    
    bool possible = true;
    int current_max = -2e9; // Initialize with a very small number
    
    for(int i = 0; i < N; i++) {
        // Condition 1: A[i] cannot be greater than B[i]
        if(A[i] > B[i]) {
            possible = false;
            break;
        }
        
        // Condition 2: If modification is needed, A[i] must be > max of prefix
        if(A[i] < B[i]) {
            if(i > 0 && A[i] <= current_max) {
                possible = false;
                break;
            }
        }
        
        // Update prefix max
        if(A[i] > current_max) {
            current_max = A[i];
        }
    }
    
    if(possible) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
} */