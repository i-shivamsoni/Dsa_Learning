#include <iostream>
using std :: cout;
void fun(int n)
{
if(n>0)
{
cout<<n;
fun(n-1);
fun(n-1);
}
}
int main() {
fun(3);
return 0;
}