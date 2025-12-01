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
        ll W,L;
        cin>>W;
        cin>>L;
        bool found=false;
        ll x=W*L;
        if(x%2==0){
                    found=true;
                } 
            if(found)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }
        
    
    return 0;
}