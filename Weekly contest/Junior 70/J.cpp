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
      string S;
      cin>>S;
      char str[2*S.length()];
    
      for(int i=0;i<S.length();i++){
        str[2*i]=S[i];
        str[2*i+1]=S[i];
      }
      int ascii[26]={0};
        for(int i=0;i<2*S.length();i++){
            ascii[str[i]-'a']++;
      }
      vector<int>v;
      for(int i=0;i<26;i++){
        if(ascii[i]>0)v.push_back(i);
      }


    char strNew[2*S.length()]={};
        int i=0, j=2*S.length()-1;
        for(int idx=0; idx<v.size();idx++){
            char letter='a'+v[idx];
            int freq=ascii[v[idx]];

            while(freq>1){
                strNew[i++]=letter;
                strNew[j--]=letter;
                freq-=2;
            }
        }

        
        for(int k=0;k<2*S.length();k++) cout << strNew[k];
        cout << endl;
    }
    return 0;
}