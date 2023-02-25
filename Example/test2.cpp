#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("1_IO/input.txt", "r", stdin);
    freopen("1_IO/output.txt", "w", stdout);
#endif

    int a, b;
    cin >> a >> b;
    std::cout << a + b << "\n";
    return 0;
}