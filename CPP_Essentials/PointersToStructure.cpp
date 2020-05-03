/****
 * MAIN Memory
|-------------------------| {  
|                         |
|        Heap             |    p = address of object l =10  || b = 10   
|                         |
|                         | }
|-------------------------| 
|                         | {
|          Stack          |        
|                         | 
|-------------------------|
|       main fun()        |    initialization 
|                         | }
|-------------------------|
|                         | {
|       code section      |  
|                         | }
|-------------------------|


Dynamically created objects are initialised in heap
Now we have to type-cast it, because the malloc ( ) function returns void pointer, right. So,void pointer means
it's a generic pointer so I have to typecast it.
****/

#include <iostream>
using std ::cout;

struct Rectangle
{
int length;      //2 bytes
int breadth;     //2 bytes
};


int main()
{
    struct Rectangle *p;  // 4 size
        p = (struct Rectangle *) malloc(sizeof(Rectangle));
          //    p = (struct Rectangle *) new struct Rectangle;

          (*p).breadth = 10;   // *p.length will not work beacause of op precidiance
          (*p).length = 11 ;

            p->breadth =11;
            p->length =12;
    return 0;
}
