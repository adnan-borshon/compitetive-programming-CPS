#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second

int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
         ll n; cin >> n;
        ll y = n % 2020;
        ll k = n / 2020;
        if(y <= k) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}