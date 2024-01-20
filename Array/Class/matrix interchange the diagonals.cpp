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
    cout<<endl;
    for(int i = 0; i < 4; i++) {
        int j = 4 - 1 - i;
        // int temp = ar[i][i];
        // ar[i][i] = ar[i][j];
        // ar[i][j] = temp;
        swap(ar[i][i], ar[i][j]);
    }
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
