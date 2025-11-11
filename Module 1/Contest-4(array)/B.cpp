#include<iostream>
using namespace std;
int main(){

  int N,K;
  cin>>N;
  cin>>K;
int array[N];
int i=0;
for(;i<N;i++){
    cin>>array[i];
}
int temp[N-K];
int j=0;
for(;j<N-K;j++){
  temp[j]=array[j];    
}
int k=N-K;
int temp2[K];
int x=0;
for(;x<K;x++){
  temp2[x]=array[k++];    
}


j=0;
for(int i=0;i<N;i++){
if(i<K)array[i]=temp2[i];
if(i>=K){
    array[i]=temp[j];
    j++;
}
    cout<<array[i]<<" ";
}

}