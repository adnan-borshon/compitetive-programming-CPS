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

int count=1;
int value= array[0];
int i=1;
int ans=-1;
while(i<N){
if(array[i]==value){
    count++;
if(count==3){
    ans=value;

}
}
else {
value=array[i];
count=1;
}
i++;
}
output[x++]=ans;
}

for(int i=0;i<T;i++){
    cout<<output[i]<<endl;
}
}