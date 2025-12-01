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
int N,M,L,Q;

cin>>N;
int A[N];
for(int i=0;i<N;i++)cin>>A[i];
cin>>M;
int B[M];
for(int i=0;i<M;i++)cin>>B[i];
cin>>L;
int C[L];
for(int i=0;i<L;i++)cin>>C[i];
cin>>Q;
int X[Q];
for(int i=0;i<Q;i++)cin>>X[i];


for(int i=0;i<Q;i++){
    bool found=false;
    int key=X[i];
    int x;
for(int n=0;n<N ;n++){
      if(found) break;
    for(int j=0;j<M;j++){
          if(found) break;
        for(int k=0;k<L && C[k]<key;k++){
            x=A[n]+B[j]+C[k];
            if(x==key){
                found=true;
                break;
            }
        }
    }
}


    if(found)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
    return 0;
}