#include <iostream>
using namespace std;
#include<iomanip>
#include<vector>
void add_matrix(vector<vector<int>> A,vector<vector<int>> B,vector<vector<int>>& C,int split_index)
{
    for (auto i = 0; i < split_index; i++)
        for (auto j = 0; j < split_index; j++)
            C[i][j]= A[i][j] + B[i][j];
}
vector<vector<int>>multiply_matrix(vector<vector<int>> A,vector<vector<int>> B)
{
    int col_1 = A[0].size();
    int row_1 = A.size();
    int col_2 = B[0].size();
    int row_2 = B.size();
    if (col_1 != row_2) {
        cout << "\nError: The number of columns in Matrix "
                "A must be equal to the number of rows in "
                "Matrix B\n";
        return {};
    }
    vector<int> row(col_2, 0);
    vector<vector<int>> ans(row_1,row);
    if (col_1 == 1) ans[0][0]= A[0][0] * B[0][0];
    else 
    {
        int split_index = col_1 / 2;
        vector<int> row_vector(split_index, 0);
        vector<vector<int>> ans_00(split_index,row_vector);
        vector<vector<int>> ans_01(split_index,row_vector);
        vector<vector<int>> ans_10(split_index,row_vector);
        vector<vector<int>> ans_11(split_index,row_vector);
        vector<vector<int>> a00(split_index, row_vector);
        vector<vector<int>> a01(split_index, row_vector);
        vector<vector<int>> a10(split_index, row_vector);
        vector<vector<int>> a11(split_index, row_vector);
        vector<vector<int>> b00(split_index, row_vector);
        vector<vector<int>> b01(split_index, row_vector);
        vector<vector<int>> b10(split_index, row_vector);
        vector<vector<int>> b11(split_index, row_vector);
        for (auto i = 0; i < split_index; i++)
            for (auto j = 0; j < split_index; j++) {
                a00[i][j] = A[i][j];
                a01[i][j] = A[i][j + split_index];
                a10[i][j] = A[split_index + i][j];
                a11[i][j] = A[i + split_index][j + split_index];
                b00[i][j] = B[i][j];
                b01[i][j] = B[i][j + split_index];
                b10[i][j] = B[split_index + i][j];
                b11[i][j] = B[i + split_index][j + split_index];
            }
        add_matrix(multiply_matrix(a00, b00),multiply_matrix(a01, b10),ans_00, split_index);
        add_matrix(multiply_matrix(a00, b01),multiply_matrix(a01, b11),ans_01, split_index);
        add_matrix(multiply_matrix(a10, b00),multiply_matrix(a11, b10),ans_10, split_index);
        add_matrix(multiply_matrix(a10, b01),multiply_matrix(a11, b11),ans_11, split_index);
        for (auto i = 0; i < split_index; i++)
            for (auto j = 0; j < split_index; j++) {
                ans[i][j]= ans_00[i][j];
                ans[i][j + split_index]= ans_01[i][j];
                ans[split_index + i][j]= ans_10[i][j];
                ans[i + split_index][j + split_index]= ans_11[i][j];
            }
        ans_00.clear();
        ans_01.clear();
        ans_10.clear();
        ans_11.clear();
        a00.clear();
        a01.clear();
        a10.clear();
        a11.clear();
        b00.clear();
        b01.clear();
        b10.clear();
        b11.clear();
    }
    return ans;
}
int main()
{
    vector<vector<int> > A = {{ 1, 1, 0, 1 },
                              { 2, 5, 2, 6 },
                              { 3, 3, 4, 3 },
                              { 2, 0, 1, 4 }};
    vector<vector<int> > B = {{ 0, 1, 1, 1 },
                              { 2, 6, 2, 3 },
                              { 3, 2, 3, 1 },
                              { 2, 1, 0, 2 }};
    vector<vector<int> > ans(multiply_matrix(A, B));
    cout<<"Multiplication :"<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<setw(4)<<ans[i][j];
        }
        cout<<endl;
    }
    return 0;
}

