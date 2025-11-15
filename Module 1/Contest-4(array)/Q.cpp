#include<iostream>
#include <algorithm>
using namespace std;

int main(){

    int T;
    cin>>T;
    bool output[T];
    int t=T;
    int x=0;
    while(t--){
    int N,K;
    cin>>N;
    cin>>K;
    int array[N];
    for(int i=0;i<N;i++){
  cin>>array[i];
}

int index;
int count=0;

for(int i=0;i<N;i++){

    if(array[i]==K){
        count++;
    index=i;
    }
}

if(count>=1)output[x++]=true;

else output[x++]=false;

}
for(int i=0;i<T;i++){
    if(output[i])cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}
}