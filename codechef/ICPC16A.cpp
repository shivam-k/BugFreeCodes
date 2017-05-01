#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	int T;
	cin>>T;
	while(T--)
	{
		int x1, y1, x2, y2;
		cin>>x1>>y1>>x2>>y2;

		if(y2>y1 && x1==x2)
			cout<<"up\n";
		else if(y2<y1 && x1==x2)
			cout<<"down\n";
		else if(x2>x1 && y1==y2)
			cout<<"right\n";
		else if(x2<x1 && y1==y2)
			cout<<"left\n";
		else
			cout<<"sad\n";
	}
	
	return 0;
}


