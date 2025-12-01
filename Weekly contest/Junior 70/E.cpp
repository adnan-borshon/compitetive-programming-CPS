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
vector<int>A;
int i=0;
while(true){
    int x;
    cin>>x;
    A.push_back(x);
    if(A[i]==0){
        break;
    }
    i++;
}
for(int i=A.size()-1;i>=0;i--)cout<<A[i]<<endl;
    return 0;
}