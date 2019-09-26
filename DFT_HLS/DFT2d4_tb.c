#include <math.h>
#include <stdio.h>

#define N 4

double Fr[N][N], Fi[N][N];

int main()
{
	int i, j, p, q;


  //input data////////////////////////////////////////////////////////
    Fr[0][0] = Fr[1][0] = 1.0;
  	Fr[0][1] = Fr[1][1] = 2.0;
  	Fr[0][2] = Fr[1][2] = 0.0;
  	Fr[0][3] = Fr[1][3] = 2.0;
  	Fr[2][0] = Fr[3][0] = Fr[2][1] = Fr[3][1] = 1.0;
  	Fr[2][2] = Fr[3][2] = Fr[2][3] = Fr[3][3] = 0.0;



  	for (p = 0; p < N; p++) {
  		for (q = 0; q < N; q++) {
  			Fi[p][q] = 0;
  		}
  	}

  ////////////////////////////////////////////////////////////////////

  DFT2d4(Fr,Fi);

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {

			printf("Fr[%d][%d]=%lf, Fi[%d][%d]=%lf\n", i, j, Fr[i][j], i, j, Fi[i][j]);
		}
	}
}
