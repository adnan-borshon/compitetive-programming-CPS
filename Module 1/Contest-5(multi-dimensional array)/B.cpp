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
int H,W;
cin>>H;
cin>>W;
int array[H][W];
int B[W][H];

for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
        cin>>array[i][j];
    B[j][i]=array[i][j];
    }
}

for(int i=0;i<W;i++){
    for(int j=0;j<H;j++){
      cout<<B[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}