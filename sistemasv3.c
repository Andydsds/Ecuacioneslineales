#include<stdio.h>
int main()
{
    int i,j,k,n;
    float A[50][50],x[50];
    float a,d,c;
    printf("Ingresa el tamaño de la matriz:\n ");
    scanf("%d",&n);
    printf("Ingresa los elementos\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+1); j++)
        {
            printf(" A[%d][%d]:", i,j);
            scanf("%f",&A[i][j]);
        }
    }
    for(j=1; j<=n; j++)
        {
        for(i=1; i<=n; i++)
        {
            if(i!=j)
            {
                d=A[i][j];
                a=A[j][j];
             c=A[i][j]/A[j][j];
    for(k=1; k<=n+1; k++)
                {
                    A[i][k]=A[i][k]-c*A[j][k];
                }
            }
        }
    }
    printf("Solucion:\n");
    for(i=1; i<=n; i++)
    {
        x[i]=A[i][n+1]/A[i][i];
        printf("\n x%d=%f\n",i,x[i]);
    }
    return 0;
}
