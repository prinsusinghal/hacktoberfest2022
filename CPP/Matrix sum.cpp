#include<iostream>
using namespace std;
int main(){
        int m, n, p, q, i, j;
    cout << "Enter rows of matrix A : ";
    cin >> m;
     cout << "Enter column of matrix A : ";
     cin>> n;
    cout << "Enter rows of matrix B : ";
    cin >> p;
     cout << "Enter column of matrix B : ";
     cin>> q; 
    int mat1[m][n],mat2[p][q],sum[m][n];
    if ((m != p) && (n != q))
    {
        cout << "Matrices cannot be added!";
        exit(0);
    }	
    cout << "Enter elements of matrix A : ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> mat1[i][j];
	cout << "Enter elements of matrix B : ";
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            cin >> mat2[i][j];		
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            sum[i][j] = mat1[i][j] + mat2[i][j];
    cout << "Sum of matrices\n";
    for (i = 0; i < m; i++)
    {    for (j = 0; j < n; j++)
            cout << sum[i][j] << "  ";	
        cout << "\n";
    }
    return 0;
}



