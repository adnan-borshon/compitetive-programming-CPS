#include<iostream>
using namespace std;
int main(){

   int X,N;
   cin>>X;
   cin>>N;
   int cost= 10*N;
   int remaining= X-cost;
   cout<<remaining/20<<endl;

}