#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}


const int N=100000;
bool prime[N+1];
void precompute_primes()
{
    for(int i=0;i<=N;i++)prime[i]=true;
    prime[0]=prime[1]=false;
    for (int i=2;i*i<=N;i++){
        if (prime[i]){
            for(long long j=i*i;j<=N;j+=i){
             prime[j]=false;
            }
        }
    }
}


int main(){

    int T;
    cin>>T;

    int output[T];
        int t=T;
    int x=0;
    precompute_primes();

    while(t--){
        int N;
        cin>>N;
        int a[N], b[N];

        for(int i =0;i<N;i++){
            cin>>a[i];
        
        }
        for(int i =0;i<N;i++)cin>>b[i]; 
        int count=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<N ;j++){

         
            long long gcd_value= gcd(a[i], b[j]);
            
                if(prime[gcd_value])count++;
                
            
            }
        }

        output[x++]=count;

     
    }
    for(int i =0;i<T;i++){
        cout<<output[i]<<endl;
    }
}