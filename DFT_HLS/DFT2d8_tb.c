#include <math.h>
#include <stdio.h>

#define N 8

double Fr[N][N], Fi[N][N];

int main()
{
	int i, j, p, q;


  //input data////////////////////////////////////////////////////////
	Fr[0][0] = Fr[1][0] = 1.0;
	Fr[0][1] = Fr[1][1] = 1.0;
	Fr[0][2] = Fr[1][2] = 0.0;
	Fr[0][3] = Fr[1][3] = 0.0;
	Fr[2][0] = Fr[3][0] = Fr[2][1] = Fr[3][1] = 0.0;
	Fr[2][2] = Fr[3][2] = Fr[2][3] = Fr[3][3] = 0.0;
	Fr[0][4] = Fr[0][5] = Fr[0][6] = Fr[0][7] = 0.0;
	Fr[1][4] = Fr[1][5] = Fr[1][6] = Fr[1][7] = 0.0;
	Fr[2][4] = Fr[2][5] = Fr[2][6] = Fr[2][7] = 0.0;
	Fr[3][4] = Fr[3][5] = Fr[3][6] = Fr[3][7] = 0.0;
	Fr[4][0] = Fr[4][1] = Fr[4][2] = Fr[4][3] = 0.0;
	Fr[5][0] = Fr[5][1] = Fr[5][2] = Fr[5][3] = 0.0;
	Fr[6][0] = Fr[6][1] = Fr[6][2] = Fr[6][3] = 0.0;
	Fr[7][0] = Fr[7][1] = Fr[7][2] = Fr[7][3] = 0.0;

	for (p = 4; p < N; p++) {
		for (q = 4; q < N; q++) {
			Fr[p][q] = 0;
		}
	}

	for (p = 0; p < N; p++) {
		for (q = 0; q < N; q++) {
			Fi[p][q] = 0;
		}
	}
  ////////////////////////////////////////////////////////////////////

  DFT2d8(Fr,Fi);

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {

			printf("Fr[%d][%d]=%lf, Fi[%d][%d]=%lf\n", i, j, Fr[i][j], i, j, Fi[i][j]);
		}
	}
}
