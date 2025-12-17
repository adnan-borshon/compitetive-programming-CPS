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
        int A[3];
    
        for(int i=0;i<3;i++)cin>>A[i];
        bool zero=false; 
        bool one=false; 
        for(int i=0;i<3;i++){
            if(A[i]==0)zero=true;
            if(A[i]==1)one=true;
         }
         if(zero && one)cout<<1<<endl;
         else cout<<0<<endl;
        
    }
    return 0;
}