#include<iostream>
using namespace std;

int main()
{
    int rows,columns;

    cin >> rows >> columns;

    int matrix[10][10],transpose[10][10];

    cout << "Enter elements:\n";

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cin >> matrix[i][j];
        }
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "\nTranspose\n";

    for(int i=0;i<columns;i++)
    {
        for(int j=0;j<rows;j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }



}
