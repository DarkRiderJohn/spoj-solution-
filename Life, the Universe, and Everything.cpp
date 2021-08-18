#include <iostream>
 
using namespace std;
 
int main()
{
    while(cin)
    {
        int tmp; cin >> tmp;
        if(tmp == 42)
            break;
        else
            cout << tmp << endl;
    }
}
 
