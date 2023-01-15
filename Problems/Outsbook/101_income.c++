// The Problem

// A persons's daily income is X taka. What is her income in one year.

#include <iostream>
using namespace std;

int main()
{
    int x, income;
    int y = 365;
    cin >> x;
    income = x * y;
    cout << income << "\n";
    return 0;
}