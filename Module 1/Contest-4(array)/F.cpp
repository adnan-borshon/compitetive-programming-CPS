#include<iostream>
using namespace std;

int main(){

    int N;
    cin>>N;
    int H[N];
    for(int i=0;i<N;i++){
    cin>>H[i];
}
int ans=H[0];
    for(int i=1;i<N;i++){
   if(H[i]>ans)ans=H[i];
   else break;
}

cout<<ans<<endl;
}