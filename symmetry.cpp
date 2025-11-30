#include<iostream>
using namespace std;

int main()
{
    int rows,columns;

    cin >> rows >> columns;

    if(rows!=columns)
    {
        cout << "It's not symmetric";
        return 0;
    }

    int matrix[10][10];

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cin >> matrix[i][j];
        }
    }

    bool symmetric=true;

    for(int i=0;i<rows;i++)
    {
        for(int j=i+1;j<columns;j++)
        {
            if(matrix[i][j]!=matrix[j][i])
            {
                symmetric=false;
            }
        }
    }

    if(symmetric)
    {
        cout << "This matrix is symmetric";
    }
    else
    {
        cout << "This matrix is not symmetric";
    }
}
