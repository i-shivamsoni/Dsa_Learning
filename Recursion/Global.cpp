#include <iostream>
using std ::cout;

int x = 0;
int fun(int n)
{
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}
int main()
{
    int r;
    r = fun(5);
    cout << r << "\n";
    r = fun(5);
    cout << r << "\n";
    return 0;
}