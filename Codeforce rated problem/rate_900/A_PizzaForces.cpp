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
        ll ans;
        if(N<=6)cout<<"15"<<endl;
        else {
            if(N%2==0){
                ans =(N/2)*5;
            }
            else ans =((N+1)/2)*5;
          
            cout<<ans <<endl;
        }
    }
    return 0;
}