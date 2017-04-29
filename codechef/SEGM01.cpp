#include <iostream>
#include <cstdlib>
#include <cstring> 
using namespace std;


int main(void)
{
	int T;
	cin>>T;
	while(T--)
	{
		char str[100002];
		cin>>str;
		int len=strlen(str), i, pass=0, pass2=0, pass3=0;
		for(i=0; i<len; i++)
		{
			if(str[i]=='1' && pass2==0)
				pass=1;
			if(pass==1 && str[i]=='0')
				pass2=1;
			if(pass2==1 && str[i]=='1')
			{
				pass=0; break;
			}
		}
		if(pass==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}

	return 0;
}


