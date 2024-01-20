#include<iostream>
using namespace std;

int main(){
    int student_marks[4][4];

    //take input from user
    for(int student=0;student<4;student++){
        for(int subject=0;subject<4;subject++){
            cin>>student_marks[student][subject];
        }
    }
    //print marks column wise
    for(int student=0;student<4;student++){
        for(int subject=0;subject<4;subject++){
            cout<<student_marks[subject][student]<<" ";
        }
        cout<<endl;
    }
}
