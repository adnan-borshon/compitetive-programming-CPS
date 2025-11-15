#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    
    long long N;
    cin>>N;

long long array[N];

bool visited[200010]={false};

for(int i =1;i<=N;i++)cin>>array[i];

for(int i =1;i<=N;i++){
    if(!visited[i] ){
        visited[array[i]]=true;
    }

}

int count=0;
long long output[200010];

for(int i=1;i<=N;i++){
    if(!visited[i]){
output[count++]=i;

    }
}
cout<<count<<endl;
for(int i=0;i<count;i++)cout<<output[i]<<" ";
}