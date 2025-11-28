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
int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>arr[i][j];

    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int key=arr[i][j];
            bool rowMin=true, colMax=true;
            for(int x=0;x<m;x++){
                if(arr[i][x]<key){
                    rowMin=false;
                    break;
                }
            }

            if(!rowMin) continue; 

          
            for(int y=0;y<n;y++){
                if(arr[y][j]>key){
                    colMax=false;
                    break;
                }
            }

            if(rowMin && colMax){
                count++;
        
            }
        }
    }

    cout<<count<<endl;
    return 0;
}