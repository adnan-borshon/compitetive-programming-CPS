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

// int main(){
//     fast;
// int W, B;
// cin>>W>>B;
// if(W<B)cout<<"No"<<endl;
// else if(W-B==1)cout<<"Yes"<<endl;
// else if((W-B)%2==0)cout<<"Yes"<<endl;
// else cout<<"No"<<endl;
//     return 0;
// }

int main(){
    fast;
    int W, B;
    cin>>W>>B;
    string main="wbwbwwbwbwbw";
        string S="";
        for(int i=0;i<20;i++)S+=main;
        bool possible=false;
        int x= W+B;
            for(int i=0;i+x<= S.size();i++){
        int w =0,b=0;
        for(int j=i;j<i+x;j++){
            if(S[j]=='w')w++;
            else b++;
        }
        if(w==W && b==B){
            possible=true;
            break;
        }
    }
    if(possible)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}