/****
 A reference is a nickname given to a variable or alias given to a variable.
 ****/ 

#include <iostream>
using std::cout;
int main()
{

    int a = 3;
    int &c = a;
    c++;
    cout<<a;
    return 0;
}