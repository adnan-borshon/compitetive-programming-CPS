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
    string S;
    cin>>S;
    bool found=false;
    for(int i=0;i<S.length()-1;i++){
        if((S[i]=='a' && S[i+1]=='b' ) || (S[i]=='b' && S[i+1]=='a' )){
          found=true;
          break;

        }
    }

    if(found)  cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}