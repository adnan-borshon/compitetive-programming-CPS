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
int H,W;
cin>>H;
cin>>W;
int array[3][3]={
    {1,2,3},{4,5,6}, {7,8,9}
};
bool found=false;
int j=0;
if(H<=3){
j=0;
}
else if(H<=6){
    j=1;
}
else j=2;

    for(int i=0;i<3;i++){
        if(array[j][i]==W)found=true;
    }
if(found)cout<<"Yes"<<endl;
else cout<<"No"<<endl;

    return 0;
}