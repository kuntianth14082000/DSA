#include<iostream>
using namespace std;

int main(){
    int arr[4][3] = {
        {3,5,6},
        {7,2,3},
        {10,1,7},
        {9,7,3},
    };
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum += arr[j][i];
        }
        cout<<"The sum for the "<<i+1<<" col is "<<sum<<endl;
    }
}
