// pattern one

#include <iostream>
using namespace std;

int main()
{
    int num = 41;

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << num + (col - 1) << "  ";
        }
        cout << endl;
    }
    return 0;
}
