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
        int count=0;
        for(int i=0;i<N;i++){
            cin>>V[i];
            if(V[i]==i+1)count++;
        }
        if(count%2==0)cout<<count/2<<endl;
        else cout<<(count/2) +1<<endl;
    }
    return 0;
}