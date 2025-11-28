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

 char col[]={
    'a','b','c','d','e','f','g','h'
 };
 char row[]={
    '8','7','6','5','4','3','2','1'
 };
 string S[8];
 for(int i=0;i<8;i++){
    cin>>S[i];
 }
 for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
        if(S[i][j]=='*'){
            cout<<col[j]<<row[i]<<endl;
        }
    }
 }
    return 0;
}