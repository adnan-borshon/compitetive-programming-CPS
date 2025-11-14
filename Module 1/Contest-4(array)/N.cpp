#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int array[10000];
    int N;
    cin>>N;

    for(int i=0;i<N;i++) cin>>array[i];

    int i=1;
    while(i<N){
        if((array[i]-array[i-1])==1 || (array[i]-array[i-1])==-1){
            i++;
            continue;
        }

    
        int newtemp[10000];
        int newtemp_size = 0;

        if(array[i-1]<array[i]){
            for(int x=array[i-1]+1;x<array[i];x++)
                newtemp[newtemp_size++] = x;
        } else {
            for(int x=array[i-1]-1;x>array[i];x--)
                newtemp[newtemp_size++]=x;
        }

        for(int k=N-1;k>=i;k--){
            array[k+newtemp_size]=array[k];
        }
    
        for(int k=0;k<newtemp_size;k++){
            array[i+k]=newtemp[k];
        }

        N+=newtemp_size; 
        i++;                
    }

    for(int k=0;k<N;k++){
        cout<<array[k]<<" ";
    }
}
