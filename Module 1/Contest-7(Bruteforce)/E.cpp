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

bool ans(ll x){
     if(x==0)return false;
    while(x%2==0)x=x/2;
    while(x%3==0)x=x/3;
    if(x==1)return true;
    else return false;
}
int main(){
    fast;
ll N;
cin>>N;
bool answer= ans(N);
if(answer)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
    return 0;
}