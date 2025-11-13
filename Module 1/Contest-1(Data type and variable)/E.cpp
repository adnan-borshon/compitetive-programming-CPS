#include<iostream>
#include <iomanip>
using namespace std;
int main(){

    long long a,b,d,r;
    double f;
    cin>>a;
    cin>>b;
    d=a/b;
    r=a%b;
    f=(double(a)/(b));
      cout<<d<<" "<<r<<" "<<fixed<<setprecision(5)<<f<<endl;
}