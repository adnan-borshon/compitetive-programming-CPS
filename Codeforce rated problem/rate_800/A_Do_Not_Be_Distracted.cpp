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
        string S;
        bool ascii[26]={false};
        cin>>S;
        int freq[26]={0};
        for(int i=0;i<S.length();i++){
            char key=S[i];
            freq[key-'A']++;
        }

        //    for(int i=0;i<26;i++){
        //     if(freq[i]==0)continue;
        //    else cout<<"index: "<<i<<", which is "<<(i+'A')<<" freq is "<<freq[i]<<endl;
        // }
    int frequency=freq[S[0]-'A'];
    char key=S[0];
    bool ans=true;
    for(int i=0;i<S.length();i++){
    //     if(frequency==0 && key!=S[i]){
    //         key=S[i];
    //         frequency=freq[S[i]-'A'];
    // }
        if(key==S[i]){
            frequency--;
        if(frequency==0 && (i+1)!=S.length()){
            key=S[i+1];
              frequency=freq[S[i+1]-'A'];
        }
        }
        else if(frequency>0 && key!=S[i]){
            ans=false;
            break;
        }

    }
    if(ans)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
    return 0;
}