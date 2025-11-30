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

string S;
cin>>S;

for(int i=0;i<S.length();i++){
if(S[i]== 'a' || S[i]== 'e' ||S[i]== 'i' ||S[i]== 'o' ||S[i]== 'u' ){
    S.erase(i--,1);
}

}
cout<<S<<endl;
    return 0;
}