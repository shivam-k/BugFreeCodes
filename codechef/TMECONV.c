#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void)
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
		char c1, c2, c3,c4;
		int hh, mm, ss;
		scanf("%d%c%d%c%d%c%c", &hh, &c1, &mm, &c2, &ss, &c3, &c4);

		if(hh<12 && c3=='P')
			hh+=12;
		if(hh==12 && c3=='A')
			hh=0;

		printf("%02d%c%02d%c%02d\n", hh, c1, mm, c2, ss);
	}

	return 0;
}