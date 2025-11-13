#include<iostream>
#include <cmath>
using namespace std;
int getRepDigit(int x){
    int d = x%10;
    while(x>0){
        if(x%10!=d) return 0;
        x/=10;
    }
    return d; 
}

int main(){

    int N;
    cin>>N;
    int array[N];

    int repdays[]={
        1,2,3,4,5,6,7,8,9,11,22,33,44,55,66,77,88,99
    };

    int count=0;
    for(int i=0;i<N;i++){
  cin>>array[i];

    int month=i+1;
 int monthdigit= getRepDigit(month);
    if(monthdigit!=0){
    for(int x=0;x<18 && repdays[x]<=array[i];x++){
        int daydigit= getRepDigit(repdays[x]);
        if(monthdigit== daydigit){
            count++;
        }
 

    }
    }
  

}

   cout<<count<<endl; 


}