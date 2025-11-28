//https://codeforces.com/problemset/problem/1535/A
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
        int s1,s2,s3,s4;
        cin>>s1;    
        cin>>s2;    
        cin>>s3;    
        cin>>s4;
        int f1,f2;
        if(s1>s2)f1=s1;
        else f1=s2;

        if(s3>s4)f2=s3;
        else f2=s4;
        bool fair=true;
        if(f1<s3 && s3!=f2)fair=false;
        else if(f1<s4 && s4!=f2)fair=false;
        else if(f2<s1 && s1!=f1)fair=false;
        else if(f2<s2 && s2!=f1)fair=false;
        if(fair)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}