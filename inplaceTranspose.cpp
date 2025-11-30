#include<iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int matrix[10][10];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> matrix[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    cout << "Transpose:" << endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
