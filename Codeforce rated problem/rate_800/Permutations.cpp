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
    if(N==2 || N==3)cout<<"NO SOLUTION"<<endl;

for(int i=1;i<=N && N!=3 && N!=2;i++){
    if(i%2==0)cout<<i<<" ";
}
for(int i=1;i<=N && N!=3 && N!=2;i++){
    if(i%2!=0)cout<<i<<" ";
}

    cout<<endl;

    return 0;
}