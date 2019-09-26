#include <math.h>

#define N 8

double Fr[N][N], Fi[N][N];

void DFT2d8(double Fr[N][N],double Fi[N][N])
{
#pragma HLS PIPELINE

  double ar = 0.0, ai = 0.0;
	double P = 6.283185307179584 / N;
	int i, j, p, q;

	for (i = 0; i < N; i++) {
#pragma HLS UNROLL
		for (j = 0; j < N; j++) {
			for (p = 0; p < N; p++) {
				for (q = 0; q < N; q++) {
					ar += Fr[p][q] * cos(P*(i*p + j * q));
					ai += Fi[p][q] * -sin(P*(i*p + j * q));
				}
			}

			Fr[i][j] = ar;
			Fi[i][j] = ai;
			ar = 0;
			ai = 0;
		}
	}
}
