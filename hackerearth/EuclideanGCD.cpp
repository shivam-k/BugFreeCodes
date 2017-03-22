/*
    GCD of two numbes by Euclidean Method
*/
#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if(b==0)
        return a;
    else
        return gcd(b, a%b);
}
int main()
{
    int a, b, temp;
    cin>>a>>b;
    if(b>a)
    {
        temp = a;
        a = b;
        b = temp;
    }
    cout<<gcd(a, b)<<"\n";


	return 0;
}