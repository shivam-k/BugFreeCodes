#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int r, t;
	scanf("%d", &t);
	for(r=0; r<t; r++)
	{
		unsigned long int n, m, jumps=0;
		scanf("%lu%lu", &n, &m);
		int k, i, x=1, y=1, temp;
		scanf("%d", &k);
		for(i=0; i<k; i++)
		{
			unsigned long int a, b;
			scanf("%lu%lu", &a, &b);
			while(x+a<=n && x+a>=1 && y+b<=m && y+b>=1)
			{
				x = x+a;
				y = y+b;
				jumps++;
			}
		}
		printf("%lu\n", jumps);
	}

	return 0;
}



/*

One day Samu went out for a walk in the park but there weren't any of her friends with her. So she decided to enjoy by her own. Samu noticed 
that she was walking in rectangular field of size N x M (units). So field can be divided into N horizontal rows, each containing M unit size 
squares. The squares have coordinates (X, Y) (1 ≤ X ≤ N , 1 ≤ Y ≤ M) , where X is the index of the row and y is the index of the column.

Samu is initially standing at (1, 1). Also she is having a deck of K cards. Cards have a number written on top and a number written on bottom 
too. These numbers tell the direction to move. It means if she is currently at some coordinate (X, Y) and value on top of card is A and on 
bottom of the card is B then she jumps to (X+A, Y+B).

Game is played with following rules :
1. She looks all cards in the order from 1 to K and consecutively chooses each card as the current one.
2. After she had chosen a current card , she makes the maximally possible number of valid jumps with the chosen card.

She had been jumping for so long that she completely forgot how many jumps she had made. Help her count how many jumps she had made.

Input : 
The first line contains number of test cases T. The first input line of each test case contains two space separated integers N and M, 
the park dimensions. The second line of each test case contains an integer K denoting the number of cards. Then follow K lines, each of 
them contains two integers A and B.

Output :
A single integer for each test case, The number of jumps Samu had made.

Constraints : 
1 ≤ T ≤ 500
1 ≤ n, m ≤ 1000000000
1 ≤ K ≤ 10000
|A|,|B| ≤ 1000000000
|A|+|B| ≥ 1

SAMPLE INPUT 
1
5 6
3
1 1
1 1
0 -4

SAMPLE OUTPUT 
5


*/