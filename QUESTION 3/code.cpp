  
//pattern three

#include <iostream>
using namespace std;

int main(){
       int n=5;
       for(int row=n; row>=1;row--){
        for(int col=1; col<=row; col++){
            cout<<(col%2) <<"  ";
        }
        cout<<endl;
       }
}

