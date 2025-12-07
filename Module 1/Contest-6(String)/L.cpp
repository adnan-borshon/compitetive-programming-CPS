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
char c[2*N];
for(int i=0;i<2*N;i+=2){
    cin>>c[i];
    c[i+1]=c[i];
}

for(int i=0;i<2*N;i++){
  cout<<c[i];
}
cout<<endl;
    return 0;
}