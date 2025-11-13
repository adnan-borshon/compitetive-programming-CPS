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
sort(array, array+N);
array[0]=array[0]+1;
int product=array[0];
int i=1;
while(i<N){
product=product*array[i++];

}
output[x++]=product;

}

for(int i=0;i<T;i++){
    cout<<output[i]<<endl;
}
}