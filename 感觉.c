#include<stdio.h>
int cu(int i, int j, int k);
int main(void){
	int i, j, k, d;
	for (i = 0; i < 10; i++)
		for (k = 0; k < 10; k++)
			for (j = 0; j < 10; j++)
				for (d = cu(i, j, k); d > 1;d=0)
					printf("%d\n", d);
	return 0;
}
int cu( int i,int j, int k)
{
	int d, s,z;
	d = i * 100 + j * 10 + k;
	s = i * i*i + j * j*j + k * k*k;
	if (d == s)
		z = d;
	else
		z = 0;
	return z;
}