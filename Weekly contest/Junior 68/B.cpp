
#include<iostream>
using namespace std;
int Score(int arr[], int n){
    int x=0;
    for(int i=0;i<n-1; i++){
       if(arr[i]!=arr[i+1])x++;
    }
    return x;
}

int main(){

    int T,N;
cin>>T;
  int Size[T];
    int start[T];
    int totalSize = 0;
    int output[100000];

for(int i =0;i<T;i++){
   cin>>N;
   Size[i]=N;
    start[i] = totalSize;
int A[N], C[N];
for(int i=0;i<N;i++){

    cin>>A[i];
    C[i]=1-A[i];
}
   int scoreA= Score(A, N);

int scoreC=Score(C,N);
if(scoreA==scoreC){
        for(int j=0;j<N;j++){
            output[totalSize + j] = C[j];

        }


}
totalSize+=N;
}

for(int i=0; i<T;i++){
    for(int j=0;j<Size[i];j++)cout<<output[start[i] + j]<<" ";
    cout<<endl;
}
}





