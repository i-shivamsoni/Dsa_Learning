
#include <iostream>
using std ::cout;
struct Rectangle
{
    int length;
    int breadth;
};

void changeLength( struct Rectangle *r1, int len)
{
    r1->length = len;
}

//call by address
int area_add(struct Rectangle *r1)
{
    return (*r1).length * (*r1).breadth;
}

void intialize (struct Rectangle *r1 ,int len ,int breath)
{
    r1->breadth = breath;
    r1->length = len;
}
int main()
{
     struct Rectangle r;
    int a = 4; int b =4;
    intialize(&r,4,4);
    changeLength(&r,10);
    cout<<area_add(&r);
    return 0;
}
