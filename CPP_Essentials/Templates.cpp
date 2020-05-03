#include <iostream>
using std ::cout;
template <class T>
class Airthametics
{
private:
    T a;
    T b;

public:
    Airthametics(T a, T b)
    {
        this->a = a;
        this->b = b;
    }
    T add();
    T subs();
};

template <class T>
T Airthametics<T>::add()
{
    T c;
    c = a + b;
    return c;
}

template <class T>
T Airthametics<T>::subs()
{
    T c;
    c = a - b;
    return c;
}

int main()
{
    Airthametics<int> i(2, 3);
    cout << i.add();
    Airthametics<float> f(2.1, 3.3);
    cout << " " << f.add();
    return 0;
}
