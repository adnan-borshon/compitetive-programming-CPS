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
int N;
cin>>N;
string S;
cin>>S;
bool x= true;
for(int i=0;i<N-1;i++){
    if(N==1)break;
    if(S[i]==S[i+1])x=false;
}
if(x)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
    return 0;
}