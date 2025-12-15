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
     int N,q;
     cin>>N>>q;
        vector<ll>V(N), Prefix_sum(N+1);
        for (auto& x : V) cin >> x;
        sort(V.begin(), V.end());
       
        for(int i=0;i<N;++i){
            Prefix_sum[i+1]=Prefix_sum[i]+V[i];
       
        }

        while(q--){
            int x,y;
            cin>>x>>y;
            cout<<Prefix_sum[N-x+y]-Prefix_sum[N-x]<<endl;
        }
    
    return 0;
}