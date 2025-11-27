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
char array[H][W];
string S[H];

for(int i=0;i<H;i++){
        cin>>S[i];
    
}

int count=0;
int mx=0;

for(int i=0;i<W;i++){
    int x=0;
    for(int j=0;j<H;j++){
      if(S[j][i]=='o')x++;
    }

        if(x==H ){
            count++;
            mx= max(mx, count);
   
    }
    else count=0;
   
}
cout<<mx<<endl;
    return 0;
}