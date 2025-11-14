#include<iostream>
using namespace std;


int power(int k){
    int ans=1;
    for(int i =1;i<=k;i++){
        ans=ans*2;
    }
    return ans;
}
int main(){

    int T;
    cin>>T;
    int output[T];
    int t=T;
    int x=0;
    int subArray_index=0;
    
    while(t--){
    int N;
    cin>>N;
    int array[N];
    for(int i=0;i<N;i++){
  cin>>array[i];
}

int allsum[N];
int sum_indexs=0;
for(int k=0;power(k)<=N;k++){
    long long ans= power(k);
    int j=0;
int sum=0;
long long temp[N];
while(j<N){
  temp[j]=array[j]^ans;
  allsum[sum_indexs]=allsum[sum_indexs] + temp[j++];
  sum_indexs++;
}

}

int minimumSum=allsum[0];
for(int i=1;i<sum_indexs;i++){
    minimumSum=min(minimumSum, allsum[i]);
}

output[x++]=minimumSum;

}

for(int i=0;i<T;i++){
    cout<<output[i]<<endl;
}
}