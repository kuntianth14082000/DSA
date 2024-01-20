#include<iostream>
using namespace std;

const int cap=10;
int ar[cap];

int i=0;
int siz=0;

bool insert_at_end(int a){
    if(siz==cap) return false;
    ar[i]=a;
    i++;
    siz++;
    return true;
}

bool delete_from_end(){
    if(siz == 0) return false;
    i--;
    siz--;
    return true;
}
bool insert_at_start(int a){
    if(siz==cap) return false;
    for(int j=i-1;j>=0;j--){
        ar[j+1]=ar[j];
    }
    ar[0]=a;
    i++;
    siz++;
    return true;
}

bool delete_from_start(){
    if(siz==0) return false;
    for(int j=1;j<siz;j++){
        ar[j-1]=ar[j];
    }
    i--;
    siz--;
    return true;
}
bool add_at_index(int a,int b){
    if(siz==cap) return false;
    for(int j=siz;j>=a;j--){
        ar[j]=ar[j-1];
    }
    ar[a]=b;
    i++;
    siz++;
}
bool delete_from_index(int a){
    if(siz==0) return false;
    for(int j=a;j<siz;j++){
        ar[j]=ar[j+1];
    }
    i--;
    siz--;
    return true;
}
void print_array(){
    for(int i=0;i<siz;i++){
        cout<<ar[i]<<" ";
    }
}
int main(){
    if(insert_at_end(10)==false) cout<<"size equal to capacity"<<endl;
    if(insert_at_end(20)==false) cout<<"size equal to capacity"<<endl;
    if(insert_at_end(30)==false) cout<<"size equal to capacity"<<endl;
    if(insert_at_end(40)==false) cout<<"size equal to capacity"<<endl;
    if(insert_at_end(50)==false) cout<<"size equal to capacity"<<endl;
    //if(insert_at_end(60)==false) cout<<"size equal to capacity"<<endl;
    if(delete_from_end()==false) cout<<"Empty array"<<endl;
    if(insert_at_start(99)==false) cout<<"Size is equal to capacity"<<endl;
    //if(delete_from_start()==false) cout<<"Empty array"<<endl;
    if(delete_from_index(2)==false) cout<<"Empty array"<<endl;
    if(add_at_index(2,45)==false) cout<<"Size is equal to capacity"<<endl;
    print_array();
}
