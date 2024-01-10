#include<bits/stdc++.h>
#define nline "\n"
using namespace std;

void print(int n, int m)
{
    if(m == 1)
    {
        cout << n << " * " << m << " = " << n * m << nline;
        return;
    }
    print(n, m - 1);
    cout << n << " * " << m << " = " << n * m << nline;
}

void nn(int n)
{
    if(n == 1)
    {
        cout << n << nline;
        return;
    }
    nn(n - 1);
    cout << n << nline;

}


int main()
{
    //print(2, 10);
    //nn(10);
    return 0;
}

