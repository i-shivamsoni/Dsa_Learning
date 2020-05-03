/****
 # Pointers
Pointer is an address variable that is meant for storing address of data,
not the data itself; normal variables are data variables, but the pointers are address variables, and Pointers
are used for indirectly accessing the dat

There are three portions of memory, code section, stack and heap.
So the program will utilize the main memory by dividing into three sections.
So this program can directly access these two areas ie stack & code section.

So heap memory is external to the program, outside the program.
but for accessing heap areas pointers can be used.

program cannot access hard disk files directly, because hard disk is external or files are
external to a program, so far that, it needs a pointer for accessing and that pointer should be a file
type and we can access that file. Then, a program may be accessing a keyboard, a program may be accessing

a monitor, a program may be accessing internet or network connection, all these things are external to
a program, so all these things can be accessed with the help of pointers. So, one major usage of pointer

they are declared and initialised in the stack frame
its size is equal to the size of a compiler
 Uses
*   parameter passing
*   accesing heap memory
*   is accessing the resources which are outside the program.


|-------------------------| {  
|                         |
|        Heap             |      P[5] = {} will be here 
|                         |
|                         | }
|-------------------------| 
|                         | {
|          Stack          |        
|                         | 
|-------------------------|
|       main fun()        |    a = 0;  || *p =&a; is here
|                         | }
|-------------------------|
|                         | {
|       code section      |  
|                         | }
|-------------------------|
 ****/
#include<malloc.h>
#include <iostream>
using std ::cout;

int main()
{
        int a = 0 ;
        int *p =&a; //initialization
        cout<<*p;  // derefrancing


        int * P = (int *) malloc(5*sizeof(int));
        int * P = new int[5] ;
    return 0;
}
