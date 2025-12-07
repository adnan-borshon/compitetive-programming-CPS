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
    string S;
    cin>>N;
    cin>>S;
    bool found[3]={false};
    int count=0;
    for(int i=0;i<N;i++){
        if(found[0]==true && found[1]==true && found[2]==true  )break;
        if(S[i]=='A' ){
           
            found[0]=true;
        }
        else if(S[i]=='B' && !found[1]){
              
            found[1]=true;
        }
            else if(S[i]=='C' && !found[2]){
            
            found[2]=true;
        }
        count++;
    }
    cout<<count<<endl;
    return 0;
}