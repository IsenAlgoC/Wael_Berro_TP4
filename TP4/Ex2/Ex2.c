#include<stdio.h>
#include<stdlib.h>
#define SEPARATEUR '/'
#define TAILLETAB1 20
int main()
{
	int MyTab1 [TAILLETAB1];
	int* MyPtr1;
	for (int i = 0; i < 20; ++i)
	{
		MyTab1[i] = i + 1;
		printf("%d%c", MyTab1[i],SEPARATEUR);
	}
	printf("\n");
	for (int i = 19; i >= 0; i--)
	{
		printf("%d%c", MyTab1[i],SEPARATEUR);
	}
}
