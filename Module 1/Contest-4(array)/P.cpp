#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    
    long long N,L,R;
    cin>>N;
    cin>>L;
    cin>>R;

long long array[N];
for(int i=0;i<N;i++)cin>>array[i];

long long output[N];

for(int i=0;i<N;i++){

output[i]=min(max(array[i],L),R);
}



for(int i=0;i<N;i++)cout<<output[i]<<" ";

}