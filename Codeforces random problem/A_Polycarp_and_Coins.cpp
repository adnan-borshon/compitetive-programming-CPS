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
    int t;
    cin >> t;
    while(t--){
      int N,x,y;
        cin>>N;
        y=N/3;
        x=N-y*2;
       
        if((x+(y*2))<=N && abs(y-x)<=1)cout<<x<<" "<<y<<endl;
        else {
            if(x>y){
             x=x-2;
             y++;
            }
            else {
                y--;
                x=x+2;
            }
       cout<<x<<" "<<y<<endl;
            
        }
       
    }
    return 0;
}