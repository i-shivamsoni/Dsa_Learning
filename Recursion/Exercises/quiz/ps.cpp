#include <iostream>
#include <cstring>
using std ::cout;

int fun(int n)

{

    int x = 1, k;

    if (n == 1)
        return x;

    for (k = 1; k < n; ++k)

        x = x + fun(k) * fun(n - k);

    return x;
}

int main(int argc, char const *argv[])
{
    // int p = 0; int k = 0;
    // int o =   p++;
    // int O =    ++k;
for (int k = 0; k < 10; ++k)
{
    cout<<k<<" ";
}


  //  fun(5);
    return 0;
}
