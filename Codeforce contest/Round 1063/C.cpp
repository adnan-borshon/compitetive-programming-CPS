#include <bits/stdc++.h>
using namespace std;

int getUnique(int **grid,int N,int arr[]) {
    int size=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<N;j++){
            bool found =false;
            for(int k=0;k<size; k++){
                if(arr[k]==grid[i][j]){
                    found=true;
                    break;
                }
            }
            if(!found){
                arr[size++]=grid[i][j];
            }
        }
    }
    return size;
}

int main(){
     int T,N;
    cin>>T;
    int output[T];
    
    for(int t =0;t<T;t++){
        cin>>N;
    int array[2*N];
         int **grid_a = new int*[2];
         for(int i=0;i<2;i++) grid_a[i] = new int[N];
        int x=0;
        for(int i =0;i<2;i++){
            for(int j=0;j<N;j++){
                cin>>grid_a[i][j];
            }
        }
 int uniqueCount = getUnique(grid_a,N,array);

 for(int i = 0; i < 2; i++) delete[] grid_a[i];
        delete[] grid_a;
 int count=0;

for(int row =1;row<=2;row++){
            for(int col=1;col<=2*N;col++){
                    bool rowExists = false;
                bool colExists = false;
                for(int i=0;i<uniqueCount;i++){
                    if(array[i]==row){
                  rowExists = true;
                        break;
                    }
                }
                
                for(int i =0;i<uniqueCount;i++){
                    if(array[i]==col){
                       colExists= true;
                        break;
                    }
                }
                 if(rowExists && colExists) count++;
            }
        }

 output[t]=count;
    }
    for(int i=0;i<T;i++)cout<<output[i]<<endl;

}