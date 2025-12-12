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
vector<int>V(N);
for(int &x:V)cin>>x;

// vector<int>B(N);
for(int i=0;i<N-1;i++){
    // B[i]=V[i]*V[i+1];
    cout<<V[i]*V[i+1]<<" ";
}
// for(int i=0;i<N-1;i++){
//    cout<<B[i]<<" ";
// }
    return 0;
}