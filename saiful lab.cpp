#include <iostream>
#include"stack.h"

using namespace std;

int main()
{
    staack ob;
    for(int i=0;i<12;i++)
       ob.push(i*10+5);
       ob.print();
       cout << "\n\nPopping out....\n\n";
       cout << ob.pop() << endl;
       cout << ob.pop() << endl;
       cout << ob.pop() << endl;
       ob.push(420);
       cout << "\n\nAfter the insertion of 420\n\n";
       cout <<ob.pop() << endl;
       cout << ob.pop() << endl;
       cout <<ob.pop() << endl;
       cout << ob.pop() << endl;


    return 0;
}
