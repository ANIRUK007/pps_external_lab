#include <stdio.h>
void main()
{
    int a[5][5],b[5][5],res[5][5],row,col;
    printf("Enter rows of matrixes:");
    scanf("%d",&row);
    printf("Enter coloumns of matrixes:");
    scanf("%d",&col);
    printf("Enter the elements Of first matrix:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements Of second matrix:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            for(int k=0;k<row;k++)
            {
                res[i][j]=a[i][k]*b[k][j];
            } 
        }
    }
    printf("Matrix after nultipication is \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d",res[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}
