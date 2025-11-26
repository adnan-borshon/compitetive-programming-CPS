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
        int array[N];
        for(int i=0; i<N; i++){
            cin>>array[i];
        }
        double sum=0;
            for(int i=0; i<N; i++){
            sum+=array[i];
        }
        if(sum == N) cout << 0 << endl;
        
        else if(sum<=N){
            cout<<1<<endl;
        }
        else cout<<abs(sum-N)<<endl;
    }
    return 0;
}