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
        int N;
        cin>>N;
        int a[N], b[N];
        for(int i=0;i<N;i++)cin>>a[i];
        for(int i=0;i<N;i++)cin>>b[i];
        int odd=0, even=0;
        for(int i=0;i<N;i++){
            if(a[i]!=b[i]){
                if(i%2==0)odd++;
                else even++;
            }
    }
    if(odd>even)cout<<"Ajisai"<<endl;
    else if(odd==even)cout<<"Tie"<<endl;
    else cout<<"Mai"<<endl;

}
    return 0;
}