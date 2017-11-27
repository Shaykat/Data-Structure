#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

char *entry, letter, choice[2];
int ascii, len, binary[8], total;
void prog();

int main()
{
      prog();
      return 0;
}

void prog()
{
   entry = new char[501];

   cout<<"Enter string to convert (up to 500 chars): ";
   cin.getline(entry, 500);
   len = strlen(entry);

   cout <<
   for(int i = 0; i<len; i++)
   {
      total = 0;
      entry[i] = toupper(entry[i]);
      letter = entry[i];
      ascii = letter;

      while(ascii>0)

      {

         if((ascii%2)==0)
         {
            binary[total] = 0;
            ascii = ascii/2;
            total++;
         }
         else
         {
            binary[total] = 1;
            ascii = ascii/2;
            total++;
         }
      }
      total--;

      while(total>=0)
      {
         cout<<binary[total];
         total--;
      }
   }
   delete[] entry;
   cout<<endl<<"Do again(1 = yes, 2= no)?: ";
   cin.getline(choice,3);
   if(choice[0] == '1')
      prog();
   else
      exit(0);
}

