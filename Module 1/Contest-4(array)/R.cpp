#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    
    long long N;
    cin>>N;

long long array[N];
long long sorted[N];
long long prefixSum[N + 1];
long long prefixFreq[N + 1]={0};
for(int i=0;i<N;i++){
    cin>>array[i];
    sorted[i]=array[i];
}

sort(sorted, sorted+N);
long long output[N];


    prefixSum[0] = 0;
    int value= sorted[0];
    for (int i = 0; i < N; i++) {
        prefixSum[i + 1] = prefixSum[i] + sorted[i];
        if(value==sorted[i] && i!=0){
            prefixFreq[value]++;
        }
        else value=sorted[i];
    }

for(int i=0;i<N;i++){
    int idx = array[i];
    long long sum;
    if(prefixFreq[idx]>1){
         sum= prefixSum[N]-prefixSum[idx+prefixFreq[idx]-1];
    }
    else long long sum= prefixSum[N]-prefixSum[idx];
    output[i]=sum;
}



for(int i=0;i<N;i++)cout<<output[i]<<" ";

}