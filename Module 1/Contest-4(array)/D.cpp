#include<iostream>
using namespace std;
int main(){

  int N,D;
  cin>>N;
  cin>>D;
int array[N];
for(int i=0;i<N;i++){
    cin>>array[i];
}
bool found=false;
for(int i=1;i<N;i++){
int ans= array[i]-array[i-1];
if(ans<=D){
    cout<<array[i]<<endl;
    found=true;
    break;
}
}
if(!found)cout<<-1<<endl;
}


