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

int digitsum(ll n){
    int s=0;
    while(n){
        s+=n%10;
        n/=10;
    }
    return s;
}

int main(){
    fast;
    int t;cin>>t;
    while(t--){
        ll x;int k;
        cin>>x>>k;
        for(ll y=x;y<=x+18;y++){
            if(digitsum(y)%k==0){
                cout<<y<<"\n";
                break;
            }
        }
    }
    return 0;
}