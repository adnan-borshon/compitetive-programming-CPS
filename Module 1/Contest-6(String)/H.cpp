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
string S=to_string(N);
bool found=true;
for(int i=0;i<S.length()-1;i++){
    int x=S[i]-'0';
    int y=S[i+1]-'0';
    if(y>=x){
        found=false;
        break;
    }

}
if(found)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
    return 0;
}