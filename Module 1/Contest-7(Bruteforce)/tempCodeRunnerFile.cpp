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
int mx= -1;
for(int i=2;i<=10;i++){
    if(N%i==0){
       mx= max(mx, i);
    }
}
cout<<mx<<endl;
    return 0;
}