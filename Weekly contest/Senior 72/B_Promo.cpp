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
int N,q;
cin>>N>>q;
vector<int>V(N);
vector<vector<int>> xy(q, vector<int>(2));
vector<int>temp;
 
for(int &x:V){
    cin>>x;
    temp.pb(x);
}
sort(temp.begin(), temp.end(),greater<int>());
for(int i=0;i<q;i++){
        cin>>xy[i][0];
        cin>>xy[i][1];
        int a=xy[i][0]-1;
        int b=xy[i][1];
        int sum=0;
        for(;a>=0 && b>0;a--){
            sum+=temp[a];
            b--;
        }
        cout<<sum<<endl;
    }
 
 
    return 0;
}