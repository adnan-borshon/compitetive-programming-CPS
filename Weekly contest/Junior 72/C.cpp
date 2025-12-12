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
        int N;
        cin>>N;
        vector<int>addy(N), om(N);

        for(int &x:om)cin>>x;
        for(int &x:addy)cin>>x;

        int om_streak=0, om_count=0;
        int addy_streak=0, addy_count=0;;
        for(int i=0;i<N;i++){
            if(om[i]!=0){
                om_count++;
            om_streak= max( om_streak, om_count);
            }
            else {
                
                om_count=0;
            }
          if(addy[i]!=0){
            addy_count++;
        addy_streak= max( addy_streak, addy_count);
        }
            else {
                
                addy_count=0;
            }
        }
        if(om_streak>addy_streak)cout<<"Om"<<endl;
        else if(addy_streak>om_streak)cout<<"Addy"<<endl;
        else cout<<"draw"<<endl;
    }
    return 0;
}