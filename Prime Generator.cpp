#include <iostream>
 
 
using namespace std;
 
bool prime(int n)
{
    if(n < 2)
        return false;
    if(n == 2)
        return true;
    if(n%2 == 0)
        return false;
    
    for(int j = 3; j * j <= n; j += 2)
    {
        if(n % j == 0)
            return false;
    }
        return true;
    
 
}
int main()
{
    int t = 10;
    cin >> t;
    while(t--)
    {
        unsigned int m,n;
        cin >> m >> n;
        
        for( int i = m; i <= n;i++)
        {
            if(prime(i))
                cout << i << endl;
        }
        cout << endl;
    }
}
 
