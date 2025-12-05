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

int gcd(int a, int b){
    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}

bool cmp(int x, int y){
    if((x%2)==0 && (y%2)==1) return true;
    if((x%2)==1 && (y%2)==0) return false;

    return x<y;
}

int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++)cin>>arr[i];
            int count=0;
            sort(arr, arr+N, cmp);
        for(int i=0;i<N-1;i++){
            for(int j=i+1;j<N;j++){
                    if(gcd(arr[i], 2*arr[j])>1)count++;
            }
        }
        cout<<count<<endl;

    }
    return 0;
}