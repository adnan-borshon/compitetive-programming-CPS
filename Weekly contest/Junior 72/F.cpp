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
ll N,K;
cin>>N>>K;

vector<ll>V;
    for (ll i = 0; i<N;i++){
        ll x;
        cin >> x;
        if (x <= K) V.pb(x);
    }
sort(V.begin(), V.end());
ll ans= (K*(K+1))/2;
int key;
if(V.size()>0){
 key=V[0];
ans -= V[0];
}
for(int i=1;i<V.size();i++){
if(key!=V[i]){
    ans-=V[i];
    key=V[i];
}


}


cout<<ans<<endl;
// vector<ll>V(N);
// vector<bool>values(K+1, false);


// for(ll &x:V){
//     cin>>x;
//     if(!values[x])values[x]=true;
// }

// ll sum=0;
// for(ll i=1;i<=K;i++){
//    if(!values[i])sum+=i;
// }
// cout<<sum<<endl;
    return 0;
}