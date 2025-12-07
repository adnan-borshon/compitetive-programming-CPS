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
        char c[3][3];
         for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>c[i][j];
            }
        }
        bool found =false;
        for(int i=0;i<3;i++){
               bool letter[3]={false};
            for(int j=0;j<3;j++){
                if(c[i][j]=='?'){
                    found=true;
                }
                else if(c[i][j]=='A')letter[0]=true;
                else if(c[i][j]=='B')letter[1]=true;
                else letter[2]=true;
            }
            if(found){
                if(!letter[0]){
                    cout<<"A"<<endl;
                    break;
                }
                  else if(!letter[1]){
                    cout<<"B"<<endl;
                    break;
                }
                  else if(!letter[2]){
                    cout<<"C"<<endl;
                    break;
                }
            }

        }
    }
    return 0;
}