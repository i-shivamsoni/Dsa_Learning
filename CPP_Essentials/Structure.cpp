/****
 * MAIN Memory
|-------------------------| {  
|                         |
|        Heap             |       
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


Structure is used for defining user defined data types. Apart from the primitive data types
 structure is a group of related data members. Now function is a group of related instructions
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
    struct Rectangle r;  // 4 size
    r.length = 1;
    r.breadth = 1;    
    struct Rectangle s {1,3};
    cout<<"area of reactangle is "<<r.breadth* r.breadth;

    Rectangle many[52];

    return 0;
}
