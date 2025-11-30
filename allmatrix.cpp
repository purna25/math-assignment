#include<iostream>
using namespace std;

int main()
{
    int mat1[10][10],mat2[10][10],res[10][10];
    int r1,r2,c1,c2;

    cin >> r1 >> c1;

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin >> mat1[i][j];
        }
    }

    cin >> r2 >> c2;

    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin >> mat2[i][j];
        }
    }

    if(r1==r2 && c1==c2)
    {
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                res[i][j]=mat1[i][j]+mat2[i][j];
            }
        }
        cout << "Addition:" << endl;
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }

    }
    else
    {
        cout << "Addition not possible" << endl;
    }

    if(r1==r2 && c1==c2)
    {
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                res[i][j]=mat1[i][j]-mat2[i][j];
            }
        }
        cout << "Subtraction:" << endl;
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }

    }
    else
    {
        cout << "Subtraction not possible" << endl;
    }

    cout << "Multiply:" << endl;

    if(c1==r2)
    {
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                res[i][j]=0;
                for(int k=0;k<c1;k++)
                {
                    res[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }

        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "MUltiplication not possible";
    }
}
