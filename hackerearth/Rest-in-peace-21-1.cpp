#include <iostream>
#include <cstdlib> 
using namespace std;


int main(void)
{
	int T;
	cin>>T;
	while(T--)
	{
		int n, pass=1, temp, buga=-1, buga1=-1, buga2=-1, count=1;
		cin>>n;

		if(n%21==0)
			pass=0;
		if(pass==1)
		{
			temp=n;
			while(temp>0)
			{
				buga=temp%10;
				if(buga1==-1)
				{
				if(buga==1 || buga==2)
					buga1=buga;
				}
				if(buga1==1 && (temp/10)%10==2)
					buga2=1;
				else if(buga2==2 && (temp/10)%10==2)
				    buga2=1;
			    else
			        buga1=-1;
				if(buga2==1)
				{
					count=0; break;
				}
				temp=temp/10;
			}
		}

		//cout<<count<<" "<<pass<<"\n";
		if(count==1 && pass==1)
			cout<<"The streak lives still in our heart!"<<"\n";
		else
			cout<<"The streak is broken!"<<"\n";
	}


	return 0;
}


