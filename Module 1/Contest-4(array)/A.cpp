#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int sum=0;
    int output[N];
    int j=0;
    for(int i=0;i<7*N;i++){
        int steps;
        cin>>steps;
               sum+=steps;
        if(i%7==6){
           output[j] = sum; 
            sum = 0; 
            j++;
        }
    }


    for (int i =0;i<N;i++)cout<<output[i]<<" ";
    cout<<endl;
  
}