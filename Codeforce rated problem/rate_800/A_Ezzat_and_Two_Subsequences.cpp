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


ld average(int arr[], int N){
    ld sum=0;
    for(int i=0;i<N;i++){
        sum+=arr[i];
    }
    return sum/N;
}
int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
     int N;
     cin>>N;
     int arr[N];
     for(int i=0;i<N;i++){
    cin>>arr[i];
     }
    
     int i=1;
     int j=N-1;
     ld mx=-9999;
     
     while(i<N){
        int a[i],b[j];
     int idx=0;
        for(int x=0;x<i;x++)a[x]=arr[x];
        for(int y=i;y<N;y++){
            b[idx++]=arr[y];
        }
        ld fa= average(a, i);
        ld fb = average(b, j);
        i++;
        j--;
        ld ans= fa+fb;
        if(ans>mx)mx=ans;

     }

  cout<<fixed<<setprecision(9)<<mx<<endl;

        
    }
    return 0;
}