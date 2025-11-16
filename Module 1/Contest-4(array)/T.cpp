#include<iostream>
#include <algorithm>
using namespace std;

int main(){

    int T;
    cin>>T;
    int output[T];
    int t=T;
    int x=0;
    while(t--){
    int N;
    cin>>N;
    int array[N];
    for(int i=0;i<N;i++){
  cin>>array[i];
}
int count=0;
for(int i=0;i<N;i++){
    if(array[i]%2!=0)count++;
}
output[x++]=count;
}

for(int i=0;i<T;i++){
    cout<<output[i]<<endl;
}
}