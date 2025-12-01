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
int a,b;
cin>>a;
cin>>b;
if((a+b+(a*b))==111)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
    return 0;
}