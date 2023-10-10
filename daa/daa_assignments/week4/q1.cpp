#include<iostream>
using namespace std;
#include<vector>
void matrix_multiply(int a[][2],int b[][2],int c[][2])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}
int main()
{
    int a[2][2]={{1,2},{3,2}},b[2][2]={{2,1},{4,5}},c[2][2]={0};
    matrix_multiply(a,b,c);
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

