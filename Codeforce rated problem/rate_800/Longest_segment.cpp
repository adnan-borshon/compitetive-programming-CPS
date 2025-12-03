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
    cin>>N;




    int arr[N][2];
    for(int a=0;a<N;a++){
  for(int i=0;i<2;i++){
    cin>>arr[a][i];
  }
    }
    ld mx=-999999;

   for(int i=0;i<N-1;i++){
     int x1=arr[i][0];
       int y1=arr[i][1];
     
    for(int j=i+1;j<N;j++){
     int x2=arr[j][0];
     int y2=arr[j][1];
     ld ans= sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
     if(ans>mx)mx=ans;
    }
   }
   
cout<<fixed<<setprecision(10)<<mx<<endl;


    return 0;
}