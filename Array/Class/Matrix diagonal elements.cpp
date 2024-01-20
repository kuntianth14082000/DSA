#include <iostream>
using namespace std;

int main() {
    int ar[4][4];
    int count = 1;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            ar[i][j] = count;
            count++;
        }
    }
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The left diagonal elements are"<<endl;
    for(int i = 0; i < 4; i++) {
        cout<<ar[i][i]<<" ";
    }
    cout<<endl;
    cout<<"The right diagonal elements are"<<endl;
    for(int i = 0; i < 4; i++) {
        int j = 4 - 1 - i;
        cout<<ar[i][j]<<" ";
    }
    
    return 0;
}
