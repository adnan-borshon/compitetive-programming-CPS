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
  string T;
cin>>S;
cin>>T;
bool same= true;
    for(int i=0;i<N;i++){
       
    if((S[i]=='l' && T[i]=='1') || (S[i]=='1' && T[i]=='l')){
       
        continue;
    }
     if((S[i]=='0' && T[i]=='o') || (S[i]=='o' && T[i]=='0')){
      
        continue;
    }
     if(S[i]==T[i]){
        
        continue;
    }
    same=false;


}

    if(same)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}