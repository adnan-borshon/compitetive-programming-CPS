#include<iostream>
using namespace std;

int power(int x,int y){
    int ans = x;
    for(int i =0;i<y-1;i++)ans=ans*x;
    return ans;
}

int main(){

   int X;
   cin>>X;

cout<<power(X,3)<<endl;
}