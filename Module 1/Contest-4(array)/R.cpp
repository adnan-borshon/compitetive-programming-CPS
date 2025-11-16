#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    
    long long N;
    cin>>N;

long long array[N];
long long sorted[N];
long long prefixSum[N + 1];
long long prefixFreq[1000003]={0};
long long suff[1000003]={0};

for(int i=0;i<N;i++){
    cin>>array[i];
    sorted[i]=array[i];
     prefixFreq[array[i]]++;
}

sort(sorted, sorted+N);
long long output[N];
    for (int i = 0; i < N; i++) {
        prefixSum[i + 1] = prefixSum[i] + sorted[i];
    }
    for(long long i=1000000;i>=1;i--){
        suff[i]=suff[i+1]+prefixFreq[i]*i;
    }
 
for(int i=0;i<N;i++){
    
    long long x=array[i];
        output[i]=suff[x+1];
}



for(int i=0;i<N;i++)cout<<output[i]<<" ";

}