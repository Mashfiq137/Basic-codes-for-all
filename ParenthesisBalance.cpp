#include<bits/stdc++.h>
using namespace std;
bool areParanthesisBalanced(string expr)
{
    stack<char> s;
    char x;
    for (int i=0; i<expr.length(); i++)
    {
        if (expr[i]=='('||expr[i]=='[')
        {

            s.push(expr[i]);
            continue;
        }
        if (s.empty())
           return false;
        switch (expr[i])
        {
        case ')':
            x = s.top();
                
            s.pop();
            if ( x=='[')
                return false;
            break;
        case ']':
            x = s.top();
            s.pop();
            if (x =='(')
                return false;
            break;
        }
    }
    return (s.empty());
}
int main()
{

    int t;

    cin>>t;

    while(t--){

    string expr ;

    cin>>expr;

    if (areParanthesisBalanced(expr))
        cout << "Yes\n";
    else
        cout << "No\n";
    }
    return 0;
}
