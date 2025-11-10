#include <bits/stdc++.h>
using namespace std;
int main(){

    int T,N;
    cin>>T;
    int output[T];
    for(int i =0;i<T;i++){
        output[i]=1;
        cin>>N;
        int a[N];
        for(int j =0;j<N;j++)cin>>a[j];
        sort(a,a+N);
        
       
        for(int j=0;j<N-1;j++){
            if(j%2==0){
                if(a[j]>a[j+1])swap(a[j],a[j+1]);
            }
            else {
                if(a[j]<a[j+1])swap(a[j],a[j+1]);
            }
        }
        for(int j=0;j<N-1;j++){
        
            if(a[j]>a[j+1]){
                output[i]=0;
                break;
            }
        }
    }
    for(int i=0;i<T;i++){
        if(output[i]==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}