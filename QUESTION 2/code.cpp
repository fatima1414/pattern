
// pattern two

#include <iostream>
using namespace std;

int main(){
    int num=11;
    for(int row=1; row<=4; row++){
        for(int cols=1; cols<=row; cols++){
            cout<<num <<" ";
            num++;
        }
        cout<<endl;
    }
}