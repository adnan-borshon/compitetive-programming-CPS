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
int x,N;
cin>>x;
cin>>N;
int arr[N][N];
 for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
        cin>>arr[i][j];
    }
 }

 for(int i=0;i<N;i++){
    bool found=false;
    for(int j=0;j<N;j++){
     if(arr[j][i]==x){
       found=true;
        break;
     }
    }
    if(found)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

 }

    return 0;
}