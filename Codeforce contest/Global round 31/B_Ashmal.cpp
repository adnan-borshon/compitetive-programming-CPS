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
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<string>S(N);

        for(int i=0;i<N;i++){
            cin>>S[i];
        }

        string ans=S[0];

        for(int i=1;i<N;i++){
            string x=S[i]+ans;
            string y=ans+S[i];

            if(x<y){
                ans=x;
            }else{
                ans=y;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}