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
    cin>>S;
    int count=0;
    bool found= false;
    for(int i=0;i<N;i++){
        if(S[i]=='|' && count!=2){
            count++;
        }
        if(count==2)break;
        if(S[i]=='*' && count==1)found=true;
    }
    if(found)cout<<"in"<<endl;
    else cout<<"out"<<endl;
    return 0;
}