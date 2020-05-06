#include <iostream>

using std ::cout;

void calling(int a)
{
    // this fun will print the number in the desending order because it is sending output to the console at the time of calling or before calling

    if (a > 0)
    {
        cout << a;
        calling(a - 1);
    }
}

void returning(int a)
{
    // this fun will print the number in the assending order because it is sending output to the console at the time of returning i.e after calling.

    if (a > 0)
    {
        returning(a - 1);
        cout << a;
    }
}


int main()
{
    calling(3);
    returning(3);

    return 0;
}
