#include<stdio.h>
int main()
{
    int i,j,k,n;
    float A[50][50],x[50],det=1;
    float a,d,c;
    FILE *archivo, *matriz;
    char espacio;
    char p1,p2;

    archivo = fopen("resultado.txt","w+");
    matriz=fopen("matriz.txt","r");

    //printf("Ingresa el tamaño de la matriz:\n ");
    fscanf(matriz,"%d",&n);
    fscanf(matriz,"%c",&espacio);

   // printf("Ingresa los elementos\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+1); j++)
        {
            fscanf(matriz,"%f",&A[i][j]);
            if(j<n+1){
                fscanf(matriz,"%c",&espacio);
            }
        }
    }

    for(j=1; j<=n; j++)
        {
            if(A[j][j] == 0.0)
			  {
				   printf("Error");
				   exit(0);
			  }
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

    fclose(archivo);
    fclose(matriz);
    return 0;
}

