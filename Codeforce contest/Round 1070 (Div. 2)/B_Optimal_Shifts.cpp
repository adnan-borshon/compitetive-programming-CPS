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


bool check_one(string S, int N){
    bool ones=true;
    for(int i=0;i<N;i++){
        if(S[i]!=1){
            ones=false;
            break;
        }
    }
    return ones;
}
int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        int N;
        cin>>N;
        string S;
        cin>>S;
        bool found = check_one(S, N);
        int d=0;

        while(!found){
            d++;
          for(int i=0;i<N-1;i++){
            if((S[i]=='0' && S[i+1]=='1') || (S[i]=='1' && S[i+1]=='0')){
                
                }

                
            }
        }
     
  
        
        cout<<d<<endl;
    }
    return 0;
}