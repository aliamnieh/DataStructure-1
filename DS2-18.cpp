// DS2-18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//در صفحه ی شطرنج مقابل میخواهیم از نقطه ی الف به نقطه ب برویم. یک رابطه بازگشتی برای ان بنویسید
#include <iostream>
#include <conio.h>
using namespace std;

//a function for counting the number of ways from A to B
long int f(int m, int n) {
    if (m == 0 || n == 0)return 1;
    return (f(m - 1, n) + f(m, n - 1));
}

int main()
{
    int row, column;
    cout << "row = ";
    cin >> row;
    cout << "column = ";
    cin >> column;
    cout << f(column, row);
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
