#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);

bool is_valid_block(const vector<ld>& gaps) {
    if (gaps.empty()) return true;
    
    int m = gaps.size() + 1;  // number of disks in block
    vector<ld> coeffs(m);
    vector<int> signs(m);
    
    coeffs[0] = 0;
    signs[0] = 1;
    
    for (int i = 1; i < m; i++) {
        coeffs[i] = gaps[i-1] - coeffs[i-1];
        signs[i] = -signs[i-1];
    }
    
    ld x_min = 1e-9;
    ld x_max = 1e18;
    
    for (int i = 0; i < m; i++) {
        if (signs[i] > 0) {
            x_min = max(x_min, -coeffs[i] + 1e-9);
        } else {
            x_max = min(x_max, coeffs[i] - 1e-9);
        }
    }
    
    return x_min < x_max;
}

int main() {
    fast;
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<ld> X(n);
        for (int i = 0; i < n; i++) {
            cin >> X[i];
        }
        
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }
        
        // Compute gaps
        vector<ld> gaps(n-1);
        for (int i = 0; i < n-1; i++) {
            gaps[i] = X[i+1] - X[i];
        }
        
        // DP: dp[i] = max tangent pairs using disks 0..i-1
        vector<int> dp(n+1, 0);
        
        for (int i = 1; i <= n; i++) {
            dp[i] = dp[i-1];  // don't use disk i-1 in any new block
            
            for (int start = 0; start < i-1; start++) {
                // Try creating a block from disk 'start' to 'i-1'
                vector<ld> block_gaps(gaps.begin() + start, gaps.begin() + (i-1));
                
                if (is_valid_block(block_gaps)) {
                    int num_pairs = block_gaps.size();
                    // Ensure separation: previous blocks must end before disk start-1
                    int prev = (start >= 1) ? dp[start-1] : 0;
                    dp[i] = max(dp[i], prev + num_pairs);
                }
            }
        }
        
        cout << dp[n] << endl;
    }
    
    return 0;
}
