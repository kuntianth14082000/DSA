#include <iostream>
using namespace std;

int main() {
   int ar[4][4] = {
        {1,2,3,4},
        {0,5,6,7},
        {1,0,8,9},
        {0,0,0,10},
    };
    int flag = 1;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(i > j) {
                if(ar[i][j] != 0) {
                    flag = 0;
                    break;
                }
            }
        }
        if(flag == 0) break;
    }
    if(flag == 1) {
        cout<<"Yes its upper triangular"<<endl;
    }else {
        cout<<"No its not"<<endl;
    }
    
    return 0;
}
