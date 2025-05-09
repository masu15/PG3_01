#include"stdio.h"
int Recursive1(int kyyuryou, int zikan, int kotei)
{
	if (kyyuryou >= kotei)
	{
		printf("%dŠÔŒã‚É’´‚¦‚é", zikan);
		return zikan;
	}
	printf("%d\n%d\n", kyyuryou, kotei);
	kyyuryou += kyyuryou * 2 - 50;
	return(Recursive1(kyyuryou, ++zikan, kotei +1072));
}
int main()
{
	int saiki = 100;
	int ippan = 1072;
	int zikan = 1;
	int result1 = Recursive1(saiki, zikan, ippan);
}