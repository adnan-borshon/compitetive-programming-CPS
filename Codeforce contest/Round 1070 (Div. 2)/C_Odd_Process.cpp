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
        
sort(V.begin(), V.end());
        for(int i=1;i<=N;i++){
           int k=i;
           int sum=0;
            for(int j=0;j<N;j++){
                if(k==1){
                    if(V[j]%2!=0)sum=V[j];
                }
                else{
                 
                }
            }
            cout<<sum<<" ";
        }
        cout<<endl;

    }
    return 0;
}