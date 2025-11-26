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
    int array[2*N];
    for(int i=0; i<2*N; i++){
            cin>>array[i];
    }
    int oddCount=0, evenCount=0;
       for(int i=0; i<2*N; i++){
            if(array[i]%2==0)evenCount++;
            else oddCount++;
    }
    if(oddCount==evenCount && evenCount==N){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
    }
    return 0;
}