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
 int L, R;
 cin>>L>>R;
 string S;
 cin>>S;
 for(int i=L-1, j=R-1;i<j;i++,j--){
    char temp=S[i];
    S[i]=S[j];
    S[j]=temp;

 }
 cout<<S<<endl;
    return 0;
}