// tower of hanoi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;


void tower(int n, char c1, char c2, char c3) {
    static int counter = 0;
    if (n == 1)
    {
        cout << setw(4)<<++counter << " : move disk " << n << " from " << c1 << " to " << c3 << endl;
    }
    else {
        tower(n - 1, c1, c3, c2);
        cout << setw(4)<<++counter << " : move disk " << n << " from " << c1 << " to " << c3 << endl;
        tower(n - 1, c2, c1, c3);
    }
}

int main()
{
    tower(8, 'A', 'B', 'C');
    _getch();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
