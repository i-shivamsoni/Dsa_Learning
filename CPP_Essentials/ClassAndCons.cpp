
#include <iostream>
using std ::cout;
class Rectangle
{
    int length;
    int breadth;

public:
    Rectangle(int len, int bth)
    {
        breadth = bth;
        length = len;
    }
    void changeLength( int len);
    int area_add();
    ~Rectangle();
};

void Rectangle ::changeLength( int len)
{
    length = len;
}

//call by address
int Rectangle ::area_add()
{
    return length * breadth;
}

int main()
{
    int a = 4;
    int b = 4;
    Rectangle r = Rectangle(a, b);
    r.changeLength(10);
    cout << r.area_add();
    return 0;
}
