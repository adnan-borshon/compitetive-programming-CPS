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
        vector<ll>arr(N);
        for(ll &x:arr) cin>>x;
        int i=1;
        int j=N-1;
            vector<ll>temp(N);
        ll mn= arr[0];
        while(i<N){
            mn= arr[i] & mn;
         
            i++;
        }
        cout<<mn<<endl;

    }

  
    return 0;
}