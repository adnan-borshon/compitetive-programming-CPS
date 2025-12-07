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
        int N;
        cin>>N;
        int ans=0;
        if(N%2!=0)cout<<ans<<endl;
        else {
            if(N%2==0)ans++;
            if(N%4==0)ans++;
            
            int x=N/2;
            int y=N/4;
            ans+=abs(x-y)-1;
            cout<<ans<<endl;
        }
        
    }
    return 0;
}