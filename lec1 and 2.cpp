#include<bits/stdc++.h>
using namespace std;
#define nline "\n"

void print(int n)
{
    if(n == 1)
    {
        cout << n << nline;
        return;
    }
    cout << n << nline;
    print(n - 1);
}


void rprint(int n)
{
    if(n == 1)
    {
        cout << n << nline;
        return;
    }
    rprint(n - 1);
    cout << n << nline;
}


void table(int a, int b = 10)
{
    if(b == 1)
    {
        cout << a << " * " << b << " = " << a * b << nline;
        return;
    }
    table(a, b - 1);
    cout << a << " * " << b << " = " << a * b << nline;
}

//fibonacci
int fibo(int n)
{
    if(n == 0 || n == 1)
    {
        return n;
    }

    return fibo(n - 1) + fibo(n - 2);
}

// 1 to N even number
void even(int n)
{

    if(n == 2)
    {
        cout << n << nline;
        return;
    }
    even(n  - 1);
    if(n % 2 == 0)
    {
        cout << n << endl;
    }
}

// 1 to N odd number
void odd(int n)
{
    if(n == 1)
    {
        cout << n << nline;
        return;
    }

    odd(n - 1);
    if(n % 2 != 0)
    {
        cout << n << nline;
    }
}

int main()
{
    //print(10);
    //rprint(10);
    //table(2);
    //even(10);
    odd(20);

    return 0;
}
