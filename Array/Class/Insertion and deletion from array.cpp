#include <iostream>
using namespace std;

const int cap = 10;
int ar[cap];

int siz = 0;
int i = 0;
bool insert_at_end(int a) {
    if(siz == cap) {
        return false;
    }
    ar[i] = a;
    i++;
    siz++;
    return true;
}
bool delete_from_end() {
    if(siz == 0) return false;
    i--;
    siz--;
    return true;
}
bool insert_at_start(int a) {
    if(siz == cap) return false;
    for(int j = i - 1; j >= 0; j--) {
        ar[j+1] = ar[j];
    }
    ar[0] = a;
    i++;
    siz++;
    return true;
}
bool delete_from_start() {
    if(siz == 0) return false;
    for(int j = 1; j < siz; j++) {
        ar[j-1] = ar[j];
    }
    i--;
    siz--;
    return true;
}
void print_array() {
    for(int j = 0 ; j < siz; j++) {
        cout<<ar[j]<<" ";
    }
}

int main() {
    if(insert_at_end(10) == false) cout<<"size is equal to capacity"<<endl;
    if(insert_at_end(20) == false) cout<<"size is equal to capacity"<<endl;
    if(insert_at_end(30) == false) cout<<"size is equal to capacity"<<endl;
    if(insert_at_start(60) == false) cout<<"size is equal to capacity"<<endl;
    if(delete_from_end() == false) cout<<"the size is already zero"<<endl;
    if(delete_from_start() == false) cout<<"the size is already zero"<<endl;
    print_array();
    return 0;
}
