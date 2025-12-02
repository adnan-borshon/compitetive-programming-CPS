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
        int N,k;
        cin>>N;
        cin>>k;
        string S;
        cin>>S;
        int count=0;
        for(int i=0;i<S.length()-k;i++){
            if(S[i]!=1){
                int x=k;
                int y=1;
                int zeroCount=0;
                while(x){
                    if(S[i+y]==0){
                        zeroCount++;
                    }
                    y++;
                    x--;
                }
                if(zeroCount==k){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}