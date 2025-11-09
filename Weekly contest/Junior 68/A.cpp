
#include<iostream>
using namespace std;
int main(){
    int T;
    int A[100];
cin>>T;
for(int i=0;i<T;i++){

    cin>>A[i];
}

for(int i=0;i<T;i++){
    if(A[i]%2==0 && A[i]%7==0)cout<<"Alice"<<endl;
    else if(A[i]%2!=0 && A[i]%9==0)cout<<"Bob"<<endl;
    else cout<<"Charlie"<<endl;
}


}
