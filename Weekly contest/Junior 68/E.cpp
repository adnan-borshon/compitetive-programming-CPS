#include<iostream>
using namespace std;

int Search(int arr[], int n, int x){
for(int i =0;i<n;i++){
    if(arr[i]==x)return i+1;
}
}
int main(){
int N;
cin>>N;
int A[N];
for(int i=0;i<N;i++)cin>>A[i];
int Q;
cin>>Q;
int array_2d[Q][2];
for(int i =0;i<Q;i++){
    for(int j=0;j<2;j++){
        cin>>array_2d[i][j];
    }
}
for(int i =0;i<Q;i++){
int x=array_2d[i][0];
int y=array_2d[i][1];

int p1= Search(A,N,x);
int p2= Search(A,N,y);
if(p1<p2)cout<<x<<endl;
else cout<<y<<endl;
}

}
