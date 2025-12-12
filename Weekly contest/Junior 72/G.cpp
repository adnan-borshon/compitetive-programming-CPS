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
        vector<int>V(3);
        for(int &x:V)cin>>x;
        sort(V.begin(), V.end());
        if(V[1]!=V[2])cout<<"NO"<<endl;
        else cout<<"YES"<<endl<< V[0]<<" "<<V[0]<<" "<<V[2]<<endl;
        
    }
    return 0;
}