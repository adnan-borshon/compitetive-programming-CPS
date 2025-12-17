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
char ch[]={
' ','a','b','c','d','e','f','g','h','i','j','k','l','m',
'n','o','p','q','r','s','t','u','v','w','x','y','z'
};

    while(t--){
        int N;
        cin>>N;
        if(N>=28 && N<=52){
            int x=1;
            int y=N-26-1;
            cout<<"a"<<ch[y]<<"z"<<endl;

        }
        else if(N>52){
            int x=N/26;
            int y=N-(26*x);
            if(x==3)cout<<"zzz"<<endl;
            else cout<<ch[y]<<"zz"<<endl;
        }
        else {
            int x=N-2;
            cout<<"aa"<<ch[x]<<endl;
        }
    }
    return 0;
}