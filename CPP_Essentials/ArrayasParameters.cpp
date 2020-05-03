#include <iostream>
using std ::cout;
// ary is a pointer to array [] is denoting the array, so we are passing the pointer so it is necessary to pass the size of the array

void print(int ary[], int n) //void print(int ary *, int n)
{
    for (int i = 0; i < n; n++)
    {
        cout << i << " ";
    }
}

//int [] retun_array(int n)
int *retun_array(int n)
{
    int *p;
    p = new int[5];
    return p;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7};

    int size = sizeof(array) / sizeof(array[0]);
    print(array, size);

    int * ary = retun_array(5) ;
     return 0;
}
