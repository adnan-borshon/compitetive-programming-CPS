#include<iostream>
using namespace std;

int main(){

    int N,P,Q,R,S;
    cin>>N;
    cin>>P;
    cin>>Q;
    cin>>R;
    cin>>S;

    int array[N];
    for(int i=0;i<N;i++){
    cin>>array[i];
}
int i=P;
int x=0;
int temp1[Q-P+1], temp2[S-R+1];
    while(i<=Q){
        temp1[x]=array[i-1];
        i++;
        x++;
    }
        for(int i =0;i<Q-P+1;i++){
        cout<<temp1[i]<<" ";
    }
    cout<<endl;
i=R;
x=0;
        while(i<=S){
        temp2[x]=array[i-1];
        i++;
        x++;
    }

           for(int i =0;i<S-R+1;i++){
        cout<<temp2[i]<<" ";
    }
        cout<<endl;
int temp1_index=0;
int  temp2_index=0;
    for(int i =0;i<N;i++){
        
        if(i>=P-1 && i<=Q-1){
            array[i]=temp2[temp2_index];
        temp2_index++;
        }
         if(i>=R-1 && i<=S-1){
            array[i]=temp1[temp1_index];
        temp1_index++; 
        }
    }
        for(int i =0;i<N;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}