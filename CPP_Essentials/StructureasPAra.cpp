#include <iostream>
using std ::cout;
/*
passing array as call by value using structure
*/

struct test
{
    int ary[5];
    int n;
};

struct Rectangle
{
    int length;
    int breadth;
};

//new object will be created so after the execution of the function the object will be destroyed
int area_val(struct Rectangle r1)
{
    return r1.length * r1.breadth;
}

//it will edit the orignal values in the main fun
int area_ref(struct Rectangle &r1)
{
    return r1.length * r1.breadth;
}

//call by address
int area_add(struct Rectangle *r1)
{
    return (*r1).length * (*r1).breadth;
}
int main()
{
    struct Rectangle r = {10, 20};
    // r.breadth = 10;
    // r.length = 10;
    cout << area_val(r);
    cout << area_ref(r);
    cout << area_add(&r);


//passing array as call by value 
struct test t1 = {{1,2,3,4,5},5};
//oprations on t1 will not change the orignal array 
    return 0;
}
