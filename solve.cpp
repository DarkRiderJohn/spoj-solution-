#include <bits/stdc++.h>

using namespace std;

#define ll long long 
#define str string
void solve();
int main()
{
    // makes cin and cout more efficient 
    ios::sync_with_stdio(0);
    cin.tie(0);    
    
    // solution 
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}

void solve()
{
    str val; cin >> val;
    str res; 
    stack<char> f;
    for(char i : val)
    {
        if(i == '(')
        {
            continue;
        }
        else if(i == '*' || i == '+' || i == '-' || i == '/' || i == '^')
        {
            f.push(i);
        }

        else if(i == ')')
        {
            // something
            res += f.top();
            f.pop();
        }
        else
        {
            res += i;
        }
    }
    cout << res << "\n";
}
