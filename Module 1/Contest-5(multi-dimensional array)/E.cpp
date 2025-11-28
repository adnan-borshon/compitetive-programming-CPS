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
 int n,m;
 cin>>n;
 cin>>m;
 int arr[n][m];
 int r1,r2,c1,c2;
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
 }
    cin>>r1;
    cin>>c1;
    cin>>r2;
    cin>>c2;
    int col=c2-c1+1;
    int row= r2-r1+1;
 int i=r1-1;
 int j=c1-1;
 int sum=0;
    while(row--){
        while(col--){
            sum+=arr[i][j++];
          
        }
        i++;
        j=c1-1;
        col=c2-c1+1;
    }

cout<<sum<<endl;
    return 0;
}