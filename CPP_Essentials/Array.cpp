#include <iostream>
using std ::cout;

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
|       main fun()        |     array gets initailised here ;
|                         | }
|-------------------------|
|                         | {
|       code section      |  
|                         | }
|-------------------------|
****/

int main()
{
    //declareration

    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; //initialization

    for (auto i : array)
    {
        /* code */
        cout << i << " ";
    }

    return 0;
}
