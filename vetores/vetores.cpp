#include <iostream>
#include <vector>

using namespace std;

void valorAlocandoMemoria(int *p)
{
    p = new int;
    *p = 7;
}

void valorModificandoMemoria(int *p)
{
    *p = 8;
}

void referencia(int *&p)
{
    p = new int;
    *p = 9;
}

int linearSearch(const vector<int> &A, int n, int k)
{
    for (int i = 0; i < n; ++i)
    {
        if (A[i] == k)
        {
            return i;
        }
    }

    return -1;
}

int linearSearch2(const vector<int> &A, int n, int k)
{
    int i = 0;
    while (i < n && A[i] != k)
    {
        ++i;
    }
    if (i < n)
    {
        return i;
    }

    return -1;
}

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;

    cout << "Antes: " << p1 << " " << p2 << " " << p3 << endl;
    cout << "Antes: " << *p1 << " " << *p2 << " " << *p3 << endl;
    cout << endl;
    valorAlocandoMemoria(p1);
    valorModificandoMemoria(p2);
    referencia(p3);

    cout << "Depois: " << p1 << " " << p2 << " " << p3 << endl;
    cout << "Depois: " << *p1 << " " << *p2 << " " << *p3 << endl;
    cout << "Depois: " << a << " " << b << " " << c << endl;

    return 0;
}