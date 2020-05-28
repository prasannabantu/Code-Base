#include <iostream>

using namespace std;


int main()
{
        //  ios_base::sync_with_stdio(false);
        int T,caseCount=1;
        scanf("%d",&T);
        while(caseCount<=T)
        {
                int rows,columns;
                int N;
                scanf("%d",&N);
                rows=N;
                columns=N;

                // int **matrix=(int**)malloc(sizeof(int)*rows);
                // for(int i=0; i<columns; i++)
                //         matrix[i]=(int*)malloc(sizeof(int)*columns);
                int matrix[N][N];



                bool boolmat1[N][N];
                bool boolmat2[N][N];

                for(int i=0; i<N; i++)
                        for(int j=0; j<N; j++)
                        {
                                boolmat1[i][j]=false;
                                boolmat2[i][j]=false;
                        }

                // //Reading the matrix
                int trace;
                trace=0;
                for(int i=0; i<rows; i++)
                        for(int j=0; j<columns; j++)
                        {
                                cin>>matrix[i][j];
                                boolmat1[i][matrix[i][j]-1]=true;
                                boolmat2[matrix[i][j]-1][j]=true;
                                if(i==j)
                                        trace+=matrix[i][j];
                        }


                int rowCount;
                int columnCount;
                rowCount=0;
                columnCount=0;
                int rowset=0;
                int columnset=0;
                for(int i=0; i<N; i++)
                {
                        rowset=0;
                        columnset=0;
                        for(int j=0; j<N; j++)
                        {
                                if(boolmat1[i][j]==false)
                                {
                                        if(rowset==0)
                                                rowCount++;
                                        rowset=1;
                                }

                                if(boolmat2[j][i]==false)
                                {
                                        if(columnset==0)
                                                columnCount++;
                                        columnset=1;
                                }
                        }
                }


                cout<<"Case #"<<caseCount<<": "<<trace<<" "<<rowCount<<" "<<columnCount<<endl;
                caseCount++;
        }
        return 0;

}
