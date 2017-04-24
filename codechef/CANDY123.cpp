#include <iostream>
#include <cstdlib> 
using namespace std;


int main(void)
{
	int T;
	cin>>T;
	while(T--)
	{
		int a, b;
		cin>>a>>b;
		int i=0;
		while(1)
		{
			if(i+1<=a)
			{
				++i; a=a-i; //Limak
			}
			else
			{
				cout<<"Bob"<<"\n";
				break;
			}

			if(i+1<=b)
			{
				++i; b=b-i; //Bob
			}
			else
			{
				cout<<"Limak"<<"\n";
				break;
			}
		}

	}

	return 0;
}


