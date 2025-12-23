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
        ll N;
        cin>>N;
        vector<ll>V(N);
        for(ll &x:V)cin>>x;
   ll sum=0;
        int mx=-99999;
        int index;

        
        for(int i=1;i<N-1;i++){
            int left=abs(V[i]-V[i-1]);
            int right= abs(V[i]-V[i+1]);
            if(left>right){
              
              if(left>mx){
                mx=left;
                if(V[i]>V[i-1]){
                  index=i;
                }
                else index=i-1;
              }
            }
            else{
        mx=right;
                if(V[i]>V[i+1]){
                  index=i;
                }
                else index=i+1;
              }

            }
        

      V.erase(V.begin()+index);

      for(int i=0;i<N-2;i++){
      sum+=abs(V[i]-V[i+1]);  
      }

     
  
        cout<<sum<<endl;
    }
    return 0;
}