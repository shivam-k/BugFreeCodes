#include <iostream>
#include <cstdlib> 
#include <iomanip>
using namespace std;


int main(void)
{
	int T;
	cin>>T;
	while(T--)
	{
		int i, n, count=1, seat;
		cin>>n;
		for(i=1; i<=9; i++)
		{
			if(n<=i*12)
			{
				int n1=(i-1)*12, n2=i*12+1, pass;
				int temp1=n-n1, temp;

				pass=n2-temp1;

				temp=(n-n1)%3;

				int temp2=n-n1;

				if(temp==2)
					cout<<pass<<" "<<"MS"<<"\n";

				else if(temp2>=1 && temp2<=3)
				{
					if(temp==0)
						cout<<pass<<" "<<"AS"<<"\n";
					else if(temp==1)
						cout<<pass<<" "<<"WS"<<"\n";
				}

				else if(temp2>=4 && temp2<=6)
				{
					if(temp==0)
						cout<<pass<<" "<<"WS"<<"\n";
					else if(temp==1)
						cout<<pass<<" "<<"AS"<<"\n";
				}

				else if(temp2>=7 && temp2<=9)
				{
					if(temp==0)
						cout<<pass<<" "<<"AS"<<"\n";
					else if(temp==1)
						cout<<pass<<" "<<"WS"<<"\n";
				}

				else if(temp2>=10 && temp2<=12)
				{
					if(temp==0)
						cout<<pass<<" "<<"WS"<<"\n";
					else if(temp==1)
						cout<<pass<<" "<<"AS"<<"\n";
				}

				break;
			}
		}
	}


	return 0;
}


