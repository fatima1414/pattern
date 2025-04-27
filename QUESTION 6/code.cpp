
// // pattern 6

// #include <iostream>
// using namespace std;

// int main()
// {
//     for (char ch = 'A'; ch <= 'Z'; ch++)
//     {
//         cout << ch << " ";
//     }
//     cout << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    // First Pattern
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << "  "; // Space between the two sections
        cout << i << endl;
    }

    cout << endl; // Space between patterns

    // Second Pattern
    cout << "  1 2 3" << endl;  // Printing numbers
    cout << "1  *   *" << endl;
    cout << "3  *****" << endl;
    cout << "2  *" << endl;
    cout << "1  *" << endl;
    cout << endl;

    // Third Pattern
    cout << "  1 2 3 4" << endl;  // Printing numbers
    cout << "4" << endl;
    cout << "3" << endl;
    cout << "2" << endl;
    cout << "1" << endl;

    return 0;
}
