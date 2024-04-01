#include <iostream>
#include <vector>
using namespace std;
void rotate(int arr[3][3], int n, int m)
{
    int x = n;
    int y = m;
    int matrix2[x][y];
    int strow = 0;
    int edcol = y - 1;

    for (int i = 0; i < x; i++)
    {
        matrix2[i][edcol] = arr[strow][i];
        strow++;
        edcol--;
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            arr[i][j] = matrix2[i][j];
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    rotate(arr, 3, 3);
}