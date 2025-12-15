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
        vector<int>V(N);
        for(int &x:V)cin>>x;
        // sort(V.begin(), V.end());
        bool found=false;
        for(int i=0;i<N;i++){
            if((i+1)>=V[i]){
                found=true;
            }
        }
        if(found)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}