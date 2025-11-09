#include<iostream>
using namespace std;

int power(int x,int y){
    int ans = x;
    for(int i =0;i<y-1;i++)ans=ans*x;
    return ans;
}

int main(){

   int X,N;
   cin>>X;
   cin>>N;

cout<<power(X,N)+power(N,X)<<endl;
}