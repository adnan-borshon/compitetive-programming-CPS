#include<iostream>
#include<cmath>
using namespace std;
int gcd(int a,int b){
    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}

bool prime(int x){
    if(x<2)return false;
    for(int i=2;i*i<=x;i++){
        if(x%i==0)return false;
    }
    return true;
}
int main(){

    int T;
    cin>>T;

    int output[T];
        int t=T;
    int x=0;


    bool is_prime[200001] = {false};
    is_prime[2] = true;
    for(int i=3; i<=200000; i+=2) is_prime[i] = true;
    
    for(int i=3; i*i<=200000; i+=2){
        if(is_prime[i]){
            for(int j=i*i; j<=200000; j+=i){
                is_prime[j] = false;
            }
        }
    }
    is_prime[0] = is_prime[1] = false;



    while(t--){
        int N;
        cin>>N;
        int a[N], b[N];
        for(int i =0;i<N;i++)cin>>a[i];
        for(int i =0;i<N;i++)cin>>b[i]; 


        int freq_a[200001] = {0};
           for(int i=0; i<N; i++){
            freq_a[a[i]]++;
        }

        int freq_b[200001] = {0};
           for(int i=0; i<N; i++){
            freq_b[b[i]]++;
        }

        long long count=0;
        for(int val_a=1;val_a<=200000;val_a++) {
            if(freq_a[val_a]==0)continue;
            
            for(int val_b=1;val_b<=200000;val_b++) {
                if(freq_b[val_b]==0)continue;
                
                int g =gcd(max(val_a,val_b),min(val_a,val_b));
                if(is_prime[g]){
                    count +=(long long)freq_a[val_a]*freq_b[val_b];
                }
            }
        }
        output[x++]=count;

     
    }
    for(int i =0;i<T;i++){
        cout<<output[i]<<endl;
    }
}