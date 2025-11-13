#include<iostream>


using namespace std;
int main(){
    int x;
cin>>x;
int ld=x%10;
int md=(x/10)%10;
int fd=x/100;


int y= md*100+ld*10+fd;
int z= ld*100+fd*10+md;
int ans= x+y+z;
cout<<ans<<endl;
}