// Given two arrays X and Y of positive integers, find the number of pairs such that xy > yx (raised to power of) where x is an element from X and y is an element from Y
#include <iostream>
#include <math.h>
using namespace std;
int counting(int X[], int Y[], int M, int N)
{
    int count = 0;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (pow(X[i], Y[j]) > pow(Y[j], X[i]))
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int X[10];
    int size;
    cout << "Enter the size ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> X[i];
    }

    int Y[10];
    int size1;
    cout << "Enter the size ";
    cin >> size1;
    for (int j = 0; j < size1; j++)
    {
        cin >> Y[j];
    }
    cout << "No of pairs are "<<counting(X, Y, size, size1);
}