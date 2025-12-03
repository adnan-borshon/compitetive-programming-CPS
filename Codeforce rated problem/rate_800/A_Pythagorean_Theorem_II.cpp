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
    int count=0;
    for(int a=1;a<=N;a++){
        for(int b=a;b<=N;b++){
            int c2= a*a + b*b;
            int c=sqrt(c2);
            if(c<= N && c*c==c2)count++;
        }
    }
    cout<<count<<endl;
    return 0;
}