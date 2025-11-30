#include<iostream>
using namespace std;

int main()
{
    int rows,columns;

    cin >> rows >> columns;

    if(rows!=columns)
    {
        cout << "It's not skew-symmetric";
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

    bool skewsymmetric=true;

    for(int i=0;i<rows;i++)
        {
            for(int j=i+1;j<columns;j++)
            {
                if(matrix[i][i]!=0)
                {
                    skewsymmetric=false;
                    break;
                }
            }
        }

    for(int i=0;i<rows;i++)
    {
        for(int j=i+1;j<columns;j++)
        {
            if(matrix[i][j]!= -matrix[j][i])
            {
                skewsymmetric=false;
            }
        }
    }

    if(skewsymmetric)
    {
        cout << "This matrix is skew-symmetric";
    }
    else
    {
        cout << "This matrix is not skew-symmetric";
    }
}

