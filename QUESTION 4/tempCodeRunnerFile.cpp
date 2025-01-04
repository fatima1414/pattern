
#include <iostream>
using namespace std;

int main()
{
    int n = 5; 
    for (int row = n; row>= 1; row--)
    { 
        for (int col = 1; col <= n - row; col++)
        {
            cout << "";
        }
     
        for (int col = row; col <= n; col++)
        {
            cout << col << " ";
        }
       
        for (int j = n - 1; j >= row; j--)
        {
            cout << j << "  " ;
        }
        cout << endl; 
    }
    return 0;
}

