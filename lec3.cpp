#include<bits/stdc++.h>
#define nline "\n"
using namespace std;

int fact(int n)
{
    if(n == 1 || n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}

//sum of N numbers

int sum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}

//power of 2

//pow(2,5) = 2 * pow(2, 4)
//pow(2,4) = 2 * pow(2, 3) 2*  2*2*2
long long int pow(int n, int num = 2)
{
    if(n == 0)
    {
        return 1;
    }
    if(n == 1)//if i remove this though the code will run good.
    {
        return 2;
    }
    return num * pow((n - 1), num);
}

int main()
{
    int n;
    cin >> n;
    if(n < 0)
    {
        cout << "Factorial is not possible for negative value";
        return 0;
    }
//    cout << fact(n);

//    cout << sum(n) << nline;
    cout << pow(n);
    return 0;

}
