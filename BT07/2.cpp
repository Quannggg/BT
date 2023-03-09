#include <iostream>

using namespace std;
void f(int a[100])
{
    cout<<sizeof(a);
}
int main()
{
    int a[100];
    cout<<sizeof(a)<<endl; // kich thuoc mang kieu bytes 4x100 = 400
    f(a); // kich thuoc con tro 8 bytes
    return 0;
}

