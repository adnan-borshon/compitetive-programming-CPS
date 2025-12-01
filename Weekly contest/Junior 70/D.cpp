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

        string S;
        cin>>S;
        int count=0;
        int start=-1,end=-1;
        for(int i=0;i<S.length();i++){
            if(count==0 && S[i]=='|'){
                start=i;
                count=1;
            }
            else if(count==1 && S[i]=='|'){
                end=i;
             break;
            
            }
        }
        if(start!=-1 && end!=-1)S.erase(start, end-start+1);
        cout<<S<<endl;
    
    return 0;
}