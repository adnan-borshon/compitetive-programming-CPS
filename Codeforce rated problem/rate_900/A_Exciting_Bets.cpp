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

ll gcd(ll a, ll b){
    
    while(b!=0){
        ll r= a%b;
        a=b;
        b=r;
    }
    return a;
}
int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
      ll a,b;
      cin>>a>>b;
      ll x,y;
      if(a==b){
        x=0;
        y=0;
      }
      else if(abs(a-b)==1){
        x=1;
        y=0;
      }
      else {
        x= abs(a-b);
        y= min(a%x, x-a%x);
      }
      cout<<x<<" "<<y<<endl;

    }
    return 0;
}