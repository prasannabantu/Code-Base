#include <iostream>
#include <map>
using namespace std;

void print_matrix(int **a,int rows,int columns)
{
        cout<<endl;
        for(int i=0; i<rows; i++)
        {
                for(int j=0; j<columns; j++)
                {
                        cout<<a[i][j]<<" ";
                }
                cout<<endl;
        }
        cout<<endl;
}

void read_matrix(int **a,int rows,int columns)
{
        for(int i=0; i<rows; i++) for(int j=0; j<columns; j++) cin>>a[i][j];
}

int main()
{
        int rows,columns;
        cin>>rows;
        cin>>columns;

        int **matrix=(int**)malloc(sizeof(int)*rows);
        for(int i=0; i<columns; i++) matrix[i]=(int*)malloc(sizeof(int)*columns);

        //Reading the matrix
        //  read_matrix(matrix,rows,columns);
        //Printing the matrix
        //print_matrix(matrix,rows,columns);

        for(int i=0; i<rows; i++) for(int j=0; j<columns; j++) matrix[i][j]=i+j;
        print_matrix(matrix,rows,columns);





        return 0;
}
