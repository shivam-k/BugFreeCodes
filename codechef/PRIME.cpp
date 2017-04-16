#include <bits/stdc++.h>
using namespace std;
 
long long int SieveOfEratosthenes(long long int n)
{
    bool prime[n+1]; long long int sum=0;
    memset(prime, true, sizeof(prime));
 
    for (long long int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (long long int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
 
    for (long long int p=2; p<=n; p++)
       if (prime[p])
          sum=sum+p;
     return sum;
}
 
// Driver Program to test above function
int main()
{
    long long int n;
    cin>>n;
    cout<<SieveOfEratosthenes(n)<<"\n";
    return 0;
} 