#include<iostream>
using namespace std;

void sprial_matrix(int m,int n, int arr[10][10])
{
    int i=0,first_row=0,first_column=0,last_row=m-1,last_column=n-1;

    while(first_row<=last_row && first_column<=last_column)
    {
        for(i=first_column;i<=last_column;i++)
        {
            cout << arr[first_row][i];
        }
    first_row++;

    for(i=first_row;i<=last_row;i++)
    {
        cout << arr[i][last_column];
    }
    last_column--;

        if(first_row<=last_row)
        {
            for(i=last_column;i>=first_column;i--)
            {
                cout << arr[last_row][i];
            }
        last_row--;
        }

        if(first_column<=last_column)
        {
            for(i=last_row;i>=first_row;i--)
            {
                cout << arr[i][first_column];
            }
        first_column++;
        }
    }
}

int main()
{
    int m=0,n=0,i=0,j=0,arr[10][10];

    //take input from user
    cout << "Enter no of row of the matrix: ";
    cin >> m;
    cout << "Enter no of column of the matrix: ";
    cin >> n;

    cout << "Enter matrix elements:\n";

    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Matrix is : \n ";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            cout << arr[i][j] << "  ";
        cout << "\n ";
    }
    cout << "The spiral matrix is:\n";
    sprial_matrix(m,n,arr);
    return 0;
}
