// DS2-19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//یک رابطه ی بازگشتی برای تعداد ضرب ها در تابع فاکتوریل بنویسید
#include <iostream>
#include <conio.h>
using namespace std;

long int fact(int x,int& count) {
    if (x == 0)return 1;
    count++;//a variable to count the number of * loading
    return x * fact(x - 1, count);
}
int main()
{
    int count = 0;
    cout << fact(10, count) << endl;
    cout << count;
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
