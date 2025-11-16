#include<iostream>
#include <algorithm>
using namespace std;

int main(){

    int T;
    cin>>T;
    string output[T];
    int t=T;
    int x=0;
    while(t--){
    string str;
    cin>>str;
int len= str.length();
if(len>10){
output[x]="";
output[x]+=str[0];

output[x]+=to_string(len-2);
output[x]+=str[len-1];
x++;
}else {

    output[x++]=str;
}
}

for(int i=0;i<T;i++){
    cout<<output[i]<<endl;
}
}