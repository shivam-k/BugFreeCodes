#include <iostream>
using namespace std;

int main()
{
	int n, m, numb1, numb2, max, min, count=0;
	cin>>n;
	if(n%2!=0)
	{
		cin>>numb1;
		max = numb1; min = numb1;
		count++;
	}
	else
	{
		cin>>numb1>>numb2;
		count = count + 2;
		if(numb1 > numb2) 
		{
			max = numb1; min = numb2;
		}
		else
		{
			max = numb2; min = numb1;
		}
	}
	while(count<=n)
	{
		cin>>numb1>>numb2;
		if(numb1>numb2)
		{
			if(numb1 > max) max = numb1;
			if(numb2 < min) min = numb2;
		}
		else
		{
			if(numb2 > max) max = numb2;
			if(numb1 < min) min = numb1;	
		}
	}

	cout<<max<<" "<<min<<"\n";

	return 0;
}