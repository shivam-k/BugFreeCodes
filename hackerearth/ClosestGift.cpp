#include <iostream>
#include <cmath>
using namespace std;
int prime(int n)
{
    int pass;
    if(n==2) return 1;
    if(n==0 || n==1) return 0;
    for(int i=2; i<=n/2; i++)
    {
        if(n%i!=0)
            pass=1;
        else
        {
            pass=0;
            break;
        }
    }
    return pass;
}
int main()
{

    int t, chk;
    cin>>t;
    int i, temp=t;

    while(1)
    {
        if(prime(temp)==1)
        {
            cout<<temp-t<<"\n";
            break;
        }
        else
            temp++;
    }

	return 0;
}