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
        for(int i=1;i<S.length()-1;i++){
            if(S[i-1]==S[i]){
                S.erase(i,1);
              
            }
        }
        cout<<S<<endl;
    }
    return 0;
}