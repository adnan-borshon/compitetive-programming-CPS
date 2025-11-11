#include<iostream>
using namespace std;

int main(){

int array[8];
for(int i=0;i<8;i++){
    cin>>array[i];
    
}
bool check=true;
    if(array[0]<100 || array[0]>675 || array[0]%25!=0){
           check=false;
    }
for(int i=1;i<8 && check;i++){
    if(array[i]<array[i-1] || array[i]<100 || array[i]>675 || array[i]%25!=0){
        check=false;
    }

    
}

if(check)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
