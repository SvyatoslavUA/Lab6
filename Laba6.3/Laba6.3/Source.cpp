#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

template < typename T >
void Print(T* B, const int size)
{
    cout << "template" << endl;
    for (int i = 0; i < size; i++)
        cout << setw(5) << B[i];
    cout << endl;
}
void Print(int* B, const int size)
{
    cout << "not template" << endl;
    for (int i = 0; i < size; i++)
        cout << setw(5) << B[i];
    cout << endl;
}

int Suma(int B[])
{
    {
        int sum = 0;
        for (int i = 0; i < 5; i++)
            if ((i % 2) == 0)
                sum += B[i];
        return sum;
    }
}

int main()
{
    const int i = 5;
    int B[i];
 
    string C[] = { "f", "a", "t", "h" };
    for (int i = 0; i < 5; i++)

    {
        cout << endl;
        cout << "B [" << i << "]= ";
        cin >> B[i];
    }
    {
        cout << endl;
        cout << "Original array" << endl;
        Print<int>(B, i); // test template function for int 
        Print<string>(C, 4); // test template function for string 
        Print(B, i); // test not template function for int 
        Print(C, 4); // test template function for string - we call template function because not template for string is not found
        cout << endl;
    }
    {
        cout << endl;
      cout << "B = " << Suma(B) << endl;
    }
    return 0;
}



