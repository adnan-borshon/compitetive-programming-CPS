#include<iostream>
using namespace std;

int main(){

int T;
cin>>T;
int n,m;
int output[T];
for(int i=0;i<T;i++){
    cin>>n;
    cin>>m;

if(n==1)output[i]=0;
    else if(n==2)output[i]=m;
else output[i]=2*m;


}

for(int i=0;i<T;i++)cout<<output[i]<<endl;
}
