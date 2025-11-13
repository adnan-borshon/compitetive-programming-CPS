#include<iostream>
#include <cmath>
using namespace std;

int main(){

    int N,T;
    cin>>T;
    bool output[T];
    int t=T;
    int x=0;
    while(t--){
    cin>>N;
    int array[N];
    double sum=0;
    for(int i=0;i<N;i++){
  cin>>array[i];
  sum+=array[i];
}
double ans=sqrt(sum);
if(ans==int(ans)){
    output[x++]=true;
}
else output[x++]=false;
    


}

for(int i=0;i<T;i++){
    if(output[i])cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
}