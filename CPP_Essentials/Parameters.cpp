/****

 3 types of Parameter passing
 * Call by Value
 * In Pass by Value,
any changes are done to formal parameters will not reflect in actual parameters.

 * Call by Reference
 * References doesn't take any memory. Existing variable, another name is given.
 one function cannot access the variables of another function directly, it can access indirectly.
 the memory, swap is not a separate function.
So if it's not a separate function it has became a part of main function and there is only one activation  record.
So if you see the working of the same program here, now as long as the main function code is running,
these are a and b; and once the swap starts these are called as x and y, and also temp variable is created
inside same old activation record of main function, right? Inside the same stack frame And, once the
swap function ends, this is gone, and the values that were 10 and 20, these will change to 20 and 10.
So this swap is not a separate body of a function, it has became a part of the main function. So, it means
that a machine code of the swap function will be pasted here.
So this is more like monolithic program, right?
The entire code inside a single main function only, So the machine code is monolithic. Though the source code is procedural or modular.
So yes, C++ does this one. C doesn't do this. C++ allows Called by Reference and the code of that function
will be copied at the place of function call. So, do you think this should be allowed or this should be entertain that code is copied.



 * Call by Pointer
 * Call by Address is suitable mechanism for modifying the actual parameters.
So, we will be using this type of code more frequently in our programs.
 ****/

#include <iostream>
using std ::cout;

//call by value
void swap_val(int x, int y) //declaration  / prototype / signature
{
    x = x + y;
    y = x - y;
    x = x - y;
    cout << x << " " << y;
}

void swap_ref(int &x, int &y) //declaration  / prototype / signature
{

    x = x + y;
    y = x - y;
    x = x - y;
}

void swap_ptr(int *x, int *y) //declaration  / prototype / signature
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}
int main()
{
    int a = 10, b = 20;
    cout << a << " " << b << "\n";
    swap_val(a, b);
    //  swap_ref(a, b);
    swap_ptr(&a,&b);
    //cout <<"\n"<< a << " " << b;
    return 0;
}
