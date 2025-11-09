#include<iostream>
using namespace std;


int main(){
    int X;
    cin>>X;
    
int n= X%100;
if(n<10)cout<<"K0"<<n<<endl;
else cout<<"K"<<n<<endl;
}