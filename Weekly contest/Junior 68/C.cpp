#include<iostream>
using namespace std;

bool Appvalue(int arr[],int x, int y, int z){
    int right=arr[z]-arr[y];
    int left=arr[y]-arr[x];
    if(left==right)return true;
    else return false;
}
int main(){

 int T,N;
cin>>T;

    bool output[T];

for(int t =0;t<T;t++){
   cin>>N;
    int A[N];
for(int i=0;i<N;i++){

    cin>>A[i];

}
bool ans=false;
 for(int j=0;j<N-2 &&!ans;j++){
     for(int i=j+1;i<N-1 &&!ans;i++){
            for(int k=i+1;k<N && !ans;k++){


     ans=Appvalue(A, j,i,k);
    if(ans){
        break;
    }

     }

            }
    }
    output[t]=ans;
}
for(int t=0;t<T;t++){
    if(output[t])cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

}
