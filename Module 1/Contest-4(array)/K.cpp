#include<iostream>
#include<algorithm>
using namespace std;
int main(){

    int N;
    cin>>N;
    int i=0;
    int array[N];
    while(i<N-1){
cin>>array[i++];
    }
sort(array, array+N-1);
i=0;
while(i<N){
    if(array[i]!=++i){
        cout<<i<<endl;
        break;
    }
}


}