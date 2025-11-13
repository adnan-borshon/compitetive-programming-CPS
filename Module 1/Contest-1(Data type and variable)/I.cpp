#include<iostream>
using namespace std;
int main(){
int A,B;

cin>>A;
cin>>B;
int ans=A;
for(int i =0;i<B-1;i++){
    ans=ans*A;
}
cout<<ans<<endl;
}