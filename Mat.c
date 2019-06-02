#include <stdio.h>
#include <stdlib.h>

int main() 
{
int i, j, k = 0;
float mat[3][3]; 
float res[3][3] = {{0,0,0},{0,0,0},{0,0,0}};;
FILE * fp;
	
	fp = fopen ("Matriz.dat","r");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			fscanf(fp,"%f", &mat[i][j]);
		}
	}	
	//Multiplicacion de filas con columnas
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			//mat[i][j] = 0;
			for(k=0;k<3;k++)
				res[i][j]+=mat[i][k]*mat[k][j];
		}
	}	
		//Imprimiendo el resultado
	printf("La matriz resultante es: \n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
				
				printf("El valor en Fila %i y Columna %i, es: %f \n",i+1,j+1,res[i][j]);
				
		}
	}		
	fclose(fp);
	return 0;
}
