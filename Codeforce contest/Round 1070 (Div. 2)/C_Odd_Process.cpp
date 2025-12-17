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
        ll N;
        cin>>N;
        vector<ll>even, odd;
        for(int i=0;i<N;i++){
            ll x;
            cin>>x;
            if(x%2==0)even.push_back(x);
            else odd.push_back(x);
        }

        sort(even.rbegin(), even.rend());
        sort(odd.begin(), odd.end());
        for(int i=1;i<even.size();i++)even[i]+=even[i-1];
        ll sum=0;
for (int k = 1; k <= N; k++) {
        if (odd.empty()) {
            cout << "0 ";
            continue;
        }
        ll evenNibo = min((ll)even.size(), (ll)k - 1);
        ll oddNibo = (ll)odd.size();
        if (oddNibo % 2 == 0)
            oddNibo--;
        if ((oddNibo + evenNibo) % 2 != k % 2)
            evenNibo--;
        if (evenNibo + oddNibo < k || evenNibo < 0)
            cout << "0 ";
        else {
            ll evenNiboKoto = evenNibo == 0 ? 0 : even[evenNibo - 1];
            cout << evenNiboKoto + odd.back() << " ";
        }
    }
    cout << "\n";

    }
    return 0;
}