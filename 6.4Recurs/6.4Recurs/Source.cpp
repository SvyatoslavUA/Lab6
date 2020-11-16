#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void Create(int* B, const int size, const int Low, const int High, int num)
{
    B[num] = Low + rand() % (High - Low + 1);
    if (num < size - 1)
        Create(B, size, Low, High, num + 1);
}

void Print(int* B, const int size, int num)
{
    cout << setw(4) << B[num];
    if (num < size - 1)
        Print(B, size, num + 1);
    else
        cout << endl;
}

int Suma(int* B, int num, int i)
{
    if (i < num)
    {
        if ((i % 2) == 0) {
            return B[i] + Suma(B, num, i + 1);
        }
        else {
            return Suma(B, num, i + 1);
        }
    }
    else
        return 0;
}

int FindFirst(int B[], int num, int i)
{
    if (B[num] == 0)
        return i;
    if (i < num - 1)
        return FindFirst(B, num, i + 1);
    else
        return -1;
}
int FindSecond(int B[], int num, int i)
{
    if (B[num] == 0)
        return i;
    if (i == num - 1)
        return FindFirst(B, num, i - 1);
    else
        return -1;
}


int Suma0(int* B, int firstZeroIndex, int lastZeroIndex, int num, int i)
{
    if (num < lastZeroIndex)
        return B[i] + Suma0(B, lastZeroIndex, i + 1, num, 0);
    else
        return 0;
}

void Sort(int B[], const int num, int i)
{
    for (int j = 0; j < num - i; j++) 
        if (B[j] < B[j + 1]) 
        { 
            int tmp = B[j];
            B[j] = B[j + 1];
            B[j + 1] = tmp;
        }
    if (i < num - 1)
        Sort(B, num, i + 1);
}


int main()
{
    srand((unsigned)time(NULL));

    int num;

    cout << "Enter integer value: ";
    cin >> num;

    int* B = new int[num];

    int Low = -10;
    int High = 10;

    Create(B, num, Low, High, 0);

    Print(B, num, 0);
    cout << "Suma = " << Suma(B, num, 0) << endl;
   
    cout << "Modified massiv: " << endl;
    Sort(B, num, 1);
    Print(B, num, 0);


    int firstZeroIndex = FindFirst(B, num, 0);
    int lastZeroIndex = FindSecond(B, num, 0);
    
    if (firstZeroIndex == -1)
    {
        cout << "No values to sum" << endl;
        return -1;
    }
    cout << "Suma values between the first zero and the second = " << Suma0(B, firstZeroIndex, lastZeroIndex, num, 0) << endl;
  
    delete[] B;

    return 0;
}
