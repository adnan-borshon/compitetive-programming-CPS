#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    
    int N;
    cin>>N;

int array[N];

for(int i=0;i<N;i++){
    cin>>array[i];
}
int S[N];
for(int i=0;i<N;i++){
    if(i==0){
        S[i]=array[i];
    continue;
    }
    int value;
    value= array[i]-array[i-1];
    S[i]=value;
 
}


for(int i=0;i<N;i++)cout<<S[i]<<" ";

}