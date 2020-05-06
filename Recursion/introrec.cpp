#include <iostream>

using std ::cout;

void fun_type1(int a)
{
    // this fun will print the number in the desending order because it is sending output to the console at the time of calling
    
    if (a > 0)
    {
        cout << a;
        fun_type1(a - 1);
    }
}

void fun_type2(int a)
{ 
    // this fun will print the number in the assending order because it is sending output to the console at the time of returning.

    if (a > 0)
    {
        fun_type2(a - 1);
        cout << a;
    }
    
}
int main()
{
    fun_type1(3);
    fun_type2(3);

    return 0;
}
