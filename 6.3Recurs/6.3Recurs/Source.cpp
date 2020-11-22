#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

template < typename T >
void Input(T* B, const int size, int n)
{
    cout << "B[" << n << "] = ";
    cin >> B[n];

    if (n < size - 1)
        Input(B, size, n + 1);
    else
        cout << endl;
}
void Input(int* B, const int size, int n) 
{
    cout << "B[" << n << "] = ";
    cin >> B[n];

    if (n < size - 1)
        Input(B, size, n + 1);
    else
        cout << endl;
}


template < typename T >
void Print(T* B, const int size, int n)
{
    if (n == 0) {
        cout << "template" << endl;
    }
    cout << setw(4) << B[n];
    if (n < size - 1)
        Print(B, size, n + 1);
    else
        cout << endl;
}
void Print(int* B, const int size, int n)
{
    if (n == 0) {
        cout << "not template" << endl;
    }
    cout << setw(4) << B[n];
    if (n < size - 1)
        Print(B, size, n + 1);
    else
        cout << endl;
}



int Suma(int* B, const int n, int i)
{
    if (i < n)
    {
        if ((i % 2) == 0) {
            return B[i] + Suma(B, n, i + 1);
        }
        else {
            return Suma(B, n, i + 1);
        }

    }
    else
        return 0;
}

int main()
{
    const int n = 5;
    int B[n];

    string C[] = { "f", "a", "t", "h", "g" };

    Input<int>(B, n, 0);

    cout << "Original array" << endl;
    Print<int>(B, n, 0); // test template function for int
    Print<string>(C, n, 0); // test template function for string 
    Print(B, n, 0); // test not template function for int 
    Print(C, n, 0); // test template function for string - we call template function because not template for string is not found

    cout << endl;

    cout << "Suma = " << Suma(B, n, 0) << endl;

    return 0;
}

