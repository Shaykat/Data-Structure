#include<iostream>
#include<stack>
#include<string>
using namespace std;

/*int main()
{
    string a="shayka";

    a = a + 't'; //"t"

    cout << a;

    return 0;
}*/

int main()
{
    stack <char> a;

    string s;

    a.push('a');
    cout << a.top();

    return 0;
}
