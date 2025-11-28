//https://codeforces.com/problemset/problem/1560/A
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
        int k;
        cin >> k;
        int count = 0;
        int num = 0;
        while(count < k){
            num++;
            if(num%3==0 || num%10==3) continue;
            count++;
        }
        cout<<num<<"\n";
    }
    return 0;
}