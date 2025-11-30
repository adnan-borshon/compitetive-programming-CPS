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
        string S;
        cin>>S;
        if(S[0]!='a' && S[1]!='b' &&  S[2]!='c')cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}