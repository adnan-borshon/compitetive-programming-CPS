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
        vector<int> V(N);
        ll sum=0;
        for(int &x:V){
            cin>>x;
        sum+=x;
        }
        int count=0;
        int odd;
        sort(V.begin(), V.end());
        if(sum%2==0)cout<<count<<endl;
        else{
        int min_ops = 999999;
            for(int i=0;i<N;i++){
                int x = V[i], ops=0;
                int parity =x%2; 
                while(x%2==parity){
                    x/=2;
                    ops++;
                }
                min_ops = min(min_ops, ops);
            }
            cout << min_ops << endl;
        }
        }
        
    
    return 0;
}