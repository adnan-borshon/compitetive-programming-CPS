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
        int L,R;
        cin>>L>>R;
        int i=L;
        int j=R;
        int count=0;
        while(i<=j){
            if(i==j){
                if(i%10==2 || i%10==3 || i%10==9)count++;
                break; 
            }
            if(i%10==2 || i%10==3 || i%10==9)count++;
            if(j%10==2 || j%10==3 || j%10==9)count++;
            i++;
            j--;
        }
        cout<<count<<endl;
    }
    return 0;
}