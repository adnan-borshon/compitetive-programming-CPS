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
        char c[N];
        bool visited[26]={false};
       
        for(int i=0;i<N;i++){
            cin>>c[i];
    
        }
        int count=0;
        for(int i=0;i<N;i++){
          if(!visited[c[i]-'A']){
            count+=2;
            visited[c[i]-'A']=true;
          }
          else count+=1;
        }
        cout<<count<<endl;
    }
    return 0;
}