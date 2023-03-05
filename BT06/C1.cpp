#include <iostream>

using namespace std;

int No = 1;
int n;
int count = 1;

void display(int a[1000][1000])
{
    cout << "Solution " << count++ << ": " << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][j])
                cout << "Q ";
            else
                cout << ". ";
        }
        cout << endl;
    }
    cout << endl;
}

bool Safe(int a[1000][1000], int row, int col)
{

    for(int i = 0; i < col; i++)
    {
        if(a[row][i]) return false;
    }
    for(int i = row, j = col; i >= 0 && j >= 0; i --, j --)
    {
        if(a[i][j]) return false;
    }
    for(int i = row, j = col; i < n && j >= 0; i ++, j --)
    {
        if(a[i][j]) return false;
    }
    return true;
}
void solve(int a[1000][1000], int col)
{

    if(col == n)
    {
        No = 0;
        display(a);
    }
    for(int i = 0; i < n; i++)
    {
        if (Safe(a,i,col))
        {
            a[i][col] = 1;
            solve(a,col+1);
            a[i][col] = 0;
        }
    }
}
int main()
{
    cin >> n;
    int a[1000][1000] = {0};
    solve(a, 0);
    if(No) cout << "No solution" << n << " Q";

    return 0;
}
