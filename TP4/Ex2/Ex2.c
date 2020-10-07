#include<stdio.h>
#include<stdlib.h>
#define SEPARATEUR '/'
#define TAILLETAB1 20
int main()
{
	int MyTab1 [TAILLETAB1];
	
	for (int i = 0; i < 20; ++i)
	{
		MyTab1[i] = i + 1;
		printf("\ %d /", MyTab1[i]);
	}
	int MyPtr1 = MyTab1[20];
	for (MyPtr1 = MyTab1[20]; MyPtr1 > 0; MyPtr1=MyPtr1-1)
	{
		printf("\ %d /", MyPtr1);
	}
}
