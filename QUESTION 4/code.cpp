
//             5
//          4  5  4
//       3  4  5  4  3
//    2  3  4  5  4  3  2
// 1  2  3  4  5  4  3  2  1

#include <iostream>
using namespace std;

int main()
{
    int n = 5; 
    for (int row = n; row>= 1; row--)
    
    {
        for(int space = 1 ; space <= row ; space++){
            cout << "  ";
        }

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
            cout << j << " " ;
        }
        cout << endl; 
    }
    return 0;
}


