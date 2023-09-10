#include <iostream>
#include <math.h>
using namespace std;
int func(int n)
{
    if (n == 1)
        return n;
    else
        return n - 1 + func(n - 1);
}
int main()
{
    int a = func(2024) - func(2022);
    cout << a << endl;
}
