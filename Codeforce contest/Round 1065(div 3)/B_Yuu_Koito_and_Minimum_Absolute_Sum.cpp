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

        for(int i=0;i<N-1;i++){
            if((i+1)%2!=0){
                if(a[i]==a[i+1] && a[i]!=b[i]){
                    a[i]=b[i];
                }
        }
        else {
            if(b[i]==b[i+1] && b[i]!=a[i]){
                b[i]=a[i];
            }
        }
    }
    int aj=0, m=0;
    for(int i=0;i<N;i++){
        aj=aj^a[i];
        m=m^b[i];
    }
    if(aj>m)cout<<"Ajisai"<<endl;
    else if(aj==m)cout<<"Tie"<<endl;
    else cout<<"Mai"<<endl;

}
    return 0;
}