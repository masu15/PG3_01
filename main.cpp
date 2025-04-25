#include"stdio.h"
template<typename T>
T add(T a, T b)
{
	if (a <b) 
	{
		return a;
	}
	if (a > b)
	{
		return b;
	}
}
template<>
char add<char>(char a, char b)
{
	
}

int main(void) 
{
	printf("%d\n", add<int>(114, 514));
	printf("%f\n", add<float>(11.4f, 51.4f));
	printf("%lf\n", add<double>(11.4444, 51.4444));
	
	
}
