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
        int b1,b2,b3;
        cin>>b1;
        cin>>b2;
        cin>>b3;
        if((b1==1 && b2==1) || (b1==1 && b3==1) || (b2==1 && b3==1))cout<<"Not now"<<endl;
        else cout<<"Water filling time"<<endl; 
    }
    return 0;
}