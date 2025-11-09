
#include<iostream>
#include <string>
using namespace std;

int main(){
string S;
cin>>S;

int len = S.length();
int ans;

char cmn;
if(S[0]==S[1])cmn=S[0];
else if(S[0]==S[2])cmn=S[0];
else cmn=S[1];

for(int i =0; i<len;i++){
   if(S[i]!=cmn){
        ans=i+1;
   break;

   }


}
cout<<ans<<endl;
}
