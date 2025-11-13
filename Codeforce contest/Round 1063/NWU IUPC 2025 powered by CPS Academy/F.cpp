#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int T;
    cin>>T;


        int t=T;
    int x=0;

    int output[T];
    while(t--){
        int K;
        cin>>K;
         int count=0;
        if(K<0){
            output[x++]=count;
            continue;
        }
        int x1=(int)sqrt(K);
        int x2=-x1;
        int y1=x1;
        int y2=-y1;
       
        for(int i=x2;i<=x1;i++){
            for(int j=y2;j<=y1;j++){
                int ans= (i*i) +(j*j);
                if(ans<=K)count++;
            }
        }
        output[x++]=count;
    }
    for(int i =0;i<T;i++){
        cout<<output[i]<<endl;
    }
}