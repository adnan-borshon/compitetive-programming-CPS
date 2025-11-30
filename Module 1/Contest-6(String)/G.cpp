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
 string S;
 cin>>S;
 bool found=false;
 for(int i=1;i<S.length();i+=2){
    if(S[i]=='0')found=true;
    else {
        found=false;
        break;
    }
 }
if(found)cout<<"Yes"<<endl;
else cout<<"No"<<endl;

} 