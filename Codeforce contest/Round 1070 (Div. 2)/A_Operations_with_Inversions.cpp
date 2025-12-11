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
        vector<int>V(N);
        for(int &x:V)cin>>x;
        int count=0;
        int i=0;
        while(i<V.size()-1){
            int j=i+1;
            if(V[i]>V[j]){
                count++;
                V.erase(V.begin()+j);
            }
            else i++;
        }
        cout<<count<<endl;
    }
    return 0;
}