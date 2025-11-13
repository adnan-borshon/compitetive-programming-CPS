#include<iostream>
using namespace std;
int main(){

    int N;
    cin>>N;
    int i=0;
    int array[4*N-1];
    while(i<4*N-1){
cin>>array[i++];
    }
    i=0;
    int count[N]={0};
        while(i<4*N-1){
            if(array[i]<=N){
              count[array[i]-1]+=1;  
              i++;
            }
    }
    i=0;
    while(i<N){
        if(count[i]<4){
            cout<<i+1<<endl;
            break;
        }
       i++;
    }

}