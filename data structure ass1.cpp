#include <iostream>
#include <cstring>
#include <string.h>
#include <String>
using namespace std;

int main()
{
    string mstring,index; // declair 2 string
    int i=0,j=0,p=0,f=1;

    cout << "String: ";
    getline(cin,mstring); // input string

    cout << "sub string: ";
    getline(cin,index);

    for(i=0;i<index.length();) // loop for sub string index which i serch
    {
        if(index[i] != mstring[j]) // if doesnt match increment next
        {
            j++;
        }
        else // if match go next to check
        {

            p = j+1; // save the first position of the sub string in the main string
            while(1) // keep checking while it match
            {
                i++;
                j++;
                if(i >= index.length())
                break;
                if(j >= mstring.length())
                break;
                if(index[i] != mstring[j])
                {
                    i = 0;
                    break;
                }
                else
                {

                    f++; // count how many charecters are matched
                }
            }

        }
        if(f == index.length()) // f equal to sub string length then give output
        {
            cout << "Position of Index: " << p << endl;
            break;
        }
        else if(j > mstring.length())
       {
            cout << "sub string not found" << endl;
            break;
       }

    }



}

