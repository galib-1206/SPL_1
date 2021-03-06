#include <iostream>
#include <bits/stdc++.h>
#include "header.h"
using namespace std;

int main()
{
    // freopen("input_matrix.txt","r",stdin);
    double original_matrix[N][N] = {};
    int row, col, i, j, k;

      printf("Enter number of rows and cols:");
    cin >> row >> col;

    printf("Input Matrix:\n ");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            cin >> original_matrix[i][j];
    }

     cout<<"Determinant:\n "<<Determinant_func(original_matrix, row, col)<<endl<<endl;

    cout << "\nRank: " << rankOfMatrix(original_matrix) << endl<<endl;

    cout<<"\nAfter normalization"<<endl;
    double sd=SD(original_matrix,row,col);

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            original_matrix[i][j]/=sd;
        }
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            cout<<"\t"<<original_matrix[i][j];
        cout<<endl;
    }

    //Generating two matrices using Rand number...

    //devided into two matrices
    printf(" Enter dimension:");

    cin>>k; // k, col of part1 & row of part2

    double matrix_p1[N][N]= {}, matrix_p2[N][N]= {};

    for(i=0; i<row; i++)
    {
        for(j=0; j<k; j++)
        {
            matrix_p1[i][j]=Rand_number();
        }
    }

    for(i=0; i<k; i++)
    {
        for(j=0; j<col; j++)
        {
            matrix_p2[i][j]=Rand_number();
        }
    }
    print(matrix_p1, matrix_p2, row, k, col);
    double res[N][N]= {0};

    double cost = eucledian_cost(res,original_matrix, row, col);

    cout<<"Cost: "<<cost<<endl;

    //print SVD
    SVD_func();




    //Polynomial Roots:
     int n;
    double arr[N];
    cout<<"\nPolynomial Equation....";
    cout<<"\nInput highest power: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        cout<<"coefficient of x^"<<n-i<<":";
        cin>>arr[n-i];
    }

    Get_coefficient(arr,n);



}
