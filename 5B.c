#include <stdio.h>
void main()
{
    int a[5][5],b[5][5],row,col;
    printf("Enter rows of matrixes:");
    scanf("%d",&row);
    printf("Enter coloumns of matrixes:");
    scanf("%d",&col);
    printf("Enter the elements Of first matrix");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements Of second matrix");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Sum of this two matrix's is");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d",a[i][j]+b[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    
}