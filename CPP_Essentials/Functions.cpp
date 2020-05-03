/****
 
|-------------------------| {  
|                         |
|        Heap             |     
|                         |
|                         | }
|-------------------------| 
|                         | {
|          Stack          |        
|-------------------------|
|                         | called fun stake frame.                         
|-------------------------|
|       main fun()        |   
|                         | }
|-------------------------|
|                         | {
|       code section      |  
|                         | }
|-------------------------|
function is a group of related instructions
which perform a specific task. So, grouping data is a structure, grouping instructions is a function.
Functions are called as modules or procedures. See, instead of writing a single main program Writing everything inside the main function,
 we can break the main function into small manageable size pieces and we can separate the repeating tasks or smaller tasks.


when we write all of our code inside a single body i.e inside main function, This is monolithic programming. 

Now, breaking a program into smaller
pieces of functions and using those functions inside the main function that is integrating them all together.
This is called as modular programming or procedural programming.
So this style of programming has increased productivity and also re-usability.
 
when function gets called , its own activation record or a stack frame is created.
Then, once the function ends, It will come out and returns back to this line. So this activation record is deleted.

function cannot access the variables of main and main cannot
access the variables of this add function, right. One function cannot access the variables of another function.
 ****/

#include <iostream>
using std ::cout;

int area(int a, int b)
{
    return a * b;
}

int main()
{
    int a = 2, b = 3;

    int c = area(a, b);
    cout << c;
    return 0;
}
