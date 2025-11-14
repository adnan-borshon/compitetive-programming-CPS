#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int array[100];
    int N;
    cin>>N;
    int i=0;
    while(i<N){
cin>>array[i++];
    }

i=1;
while(i<N && array[i]){
    if(array[i]-array[i-1]!=1){
        i++;
        continue;
    }
if(array[i-1]<array[i] ){
    int newtemp_size=array[i]-array[i-1]-1;
    int newtemp[newtemp_size];
    int j=0;
    for(;j<newtemp_size;j++){
        newtemp[j]=array[i-1]+1+j;
    }

    int from= i+1;
    // int len=N-(i+1);
    int len=newtemp_size;
    int to=N-1;
    rotate(array+from , array+from+len, array+to+len);
   j=0;
   int x=i+1;
   for(;x<newtemp_size+i;x++){
    array[x]=newtemp[j++];
   }
}
else {
    int newtemp_size=array[i-1]-array[i]-1;
    int newtemp[newtemp_size];
    int j=0;
    for(;j<newtemp_size;j++){
        newtemp[j]=array[i]-1-j;
    }

    int from= i+1;
    // int len=N-(i+1);
    int len=newtemp_size;
    int to=N-1;
    rotate(array+from , array+from+len, array+to+len);
   j=0;
   int x=i+1;
   for(;x<newtemp_size+i;x++){
    array[x]=newtemp[j++];
   }
}


    i++;
}


i=0;
while(array[i]){
    cout<<array[i++]<<" ";
}

}