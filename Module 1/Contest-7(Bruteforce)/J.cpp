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
      if(N%7==0){
        cout<<N<<endl;
      }
      else {

          int x=N/7;
          int tenthdigit=N/10;
          if((x*7)/10!=tenthdigit)x++;
          cout<<x*7<<endl;
        }
    }
    return 0;
}