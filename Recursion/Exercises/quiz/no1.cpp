#include <iostream>
#include <cstring>
using std ::cout;
int f (int &x, int c) 

{

        c = c - 1; 

if (c == 0) return 1; 

x = x + 1; 

return f(x,c) * x;

        }

int main(int argc, char const *argv[])
{
    int p = 5;
    cout<<f(p,p);
    return 0;
}

