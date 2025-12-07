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
  string S;
cin>>S;
int Takahashi=0, Aoki=0;
int mx;
for(int i=0;i<N;i++){
if(S[i]=='T'){
    Takahashi++;
}
else if(S[i]=='A'){
    Aoki++;
}
}
if(Takahashi==Aoki){
    if(S[N-1]=='T')Takahashi--;
    else Aoki--;
}
if(Takahashi>Aoki)cout<<"T"<<endl;
else cout<<"A"<<endl;
    return 0;
}