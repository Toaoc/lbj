#include<stdio.h>
long long jie(long long a);
long main(void)
{
	long long  b,n, Sn;
	scanf_s("%lld", &n);
	for (b = 1, Sn = 0; b< n + 1; b++)
		Sn = Sn + jie(b);
	printf("%lld", Sn);
	return 0;

}
long long jie(long long a)
{
	long long i,s;
	for (s = i = 1; i < a + 1; i++)
		s = s * i;
	return s;
}