#include <iostream>

using namespace std;
int binarysearch(int* a, int low, int key, int high)
{
    if(high >= low)
    {
        int mid = (low + high)/2;
        if(a[mid] < key) return binarysearch(a, mid + 1, key, high);
        else if(a[mid] == key) return mid;
        else return binarysearch(a, low, key, mid - 1);
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i = 0; i < n; i ++)
    {
        cin>>*(a+i);
    }
    int key;
    cin>>key;
    cout<< binarysearch(a, 0, key, n-1);
    return 0;


}
