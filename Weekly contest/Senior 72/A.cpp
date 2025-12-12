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
       int mn= 1e9;
       bool sorted=true;
       for(int i=0;i<N;i++){
        cin>>V[i];
        if(i>0){
            mn= min(mn, V[i]-V[i-1]);
             sorted &= V[i] >= V[i - 1];
        }

       }
       if(!sorted)cout<<"0"<<endl;
       else cout<<mn/2+1<<endl;

    }
    return 0;
}