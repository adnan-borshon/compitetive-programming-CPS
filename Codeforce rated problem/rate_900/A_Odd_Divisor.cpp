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
        if(N%2==0){
            ll x=N;
            while(true){
                x=x/2;
                    if(x==1){
                    cout<<"NO"<<endl;
                    break;
                }
                if(x%2!=0){
                    cout<<"YES"<<endl;
                    break;
                }
            
            }
        }
        else {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}