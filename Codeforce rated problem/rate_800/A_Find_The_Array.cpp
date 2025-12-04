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
        int N;
        cin>>N;
        int count=0;
        int sum=0;
        for(int i=1;i<=N;i+=2){
            
            if(N==2 ){
                count=2;
                break;
            }
            if(i==1){
                count++;
                sum+=i;
           
            }
            if (sum==N){
                break;
            }
        
            else if(sum<N){
                if(i-1>=1 && i-2>=1){
                    if(sum+i<=N){
                        count++;
                        sum+=i;
                        
                    }
                    else {
        
         int extra= N-sum;
                sum+=extra;
                count++;
              
                    }
                
                }
            }
          
        }

        cout<<count<<endl;
    }
    return 0;
}