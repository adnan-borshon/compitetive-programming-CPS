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
       int row,col;
       for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            char x;
            cin>>x;
            c[i][j]=x;
            if(x=='?'){
                row=i;
                col=j;
            }
        }
       } 
       int countA=0, countB=0, countC=0;
       for(int i=0;i<3;i++){
        if(c[row][i]=='A')countA++;
        else if(c[row][i]=='B')countB++;
        else if(c[row][i]=='C')countC++;
       }
          for(int i=0;i<3;i++){
        if(c[i][col]=='A')countA++;
        else if(c[i][col]=='B')countB++;
        else if(c[i][col]=='C')countC++;
       }

       if(countA!=2)cout<<"A"<<endl;
       else if(countB!=2)cout<<"B"<<endl;
       else cout<<"C"<<endl;
    }
    return 0;
}