#include <iostream>

using namespace std;

char* weird_string()
{
    char c[] = "12345";
    return c;
}

int main()
{
    cout << weird_string();
    return 0;
    //address of local variable ?c? returned [-Wreturn-local-addr]
}
