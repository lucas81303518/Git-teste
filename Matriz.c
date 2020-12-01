#include <stdio.h>
#include <stdlib.h>
//Exercicio matriz
int main ()
{
  int matriz[4][4],i, j;

  printf ("\nDigite valor para os elementos da matriz\n\n");

  for ( i=0; i<4; i++ ){
    for ( j=0; j<4; j++ ){
 matriz[i][j]=i+j;
      printf ("\nElemento[%d][%d] = ", i, j);
      scanf ("%d", &matriz[ i ][ j ]);

    }
    }

  for ( i=0; i<4; i++ ){
  for ( j=0; j<4; j++ ){

      printf ("\nElemento[%d][%d] = %d\n", i, j, matriz[ i ][ j ]);
    }
    printf("");
  }
  printf("\n\n\n");
  return(0);
}
