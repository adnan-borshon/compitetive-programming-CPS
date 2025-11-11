#include<iostream>
using namespace std;
int main(){

  int N,M;
  cin>>N;
  cin>>M;
int array[N];
int ans[M];

for(int i=0;i<N;i++){
    cin>>array[i];
}
for(int i=0;i<M;i++){
    cin>>ans[i];
}
int j=0;
int sum=0;
for(int i=0;i<N;i++){
    if(ans[j]==i+1){
        sum+=array[i];
    j++;
}
}
cout<<sum<<endl;

}