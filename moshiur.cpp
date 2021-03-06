/*1. Create your own string functions that works as same as the following library functions -
	(a) strlen( s )
	(b) strcmp( s1, s2 )
	(c) strcpy( s1, s2 )
	(d) strcat( s1, s2 )*/

/*2. Observe the behaviors of the following program that contains 3 user-defined Functions: xleft( ), xright( ) and xsubstr( ) from the output given below.
Define the user-defined function from the following program, which should give exactly the same output as shown in the example.
You can only use the functions created in question 1.*/
#include<iostream>
#include<cstring>
using namespace std;

	int main( void )
	{
	    char msg[ ] = "Vote Sunderban for New7Wonder";
	    char newmsg[35];

	    xleft(msg, newmsg, 14);
	    printf("\n%s",newmsg);

	    xright(msg, newmsg, 10);
	    printf("\n%s", newmsg);

	    xsubstr(msg, newmsg, 16, 18);
	    printf("\n%s", newmsg);

	    xcat(msg, newmsg, 6, 14, 19, 29);
	    printf("\n%s", newmsg);

	    xcmp(msg, newmsg, 9, 11, 27, 29);
	    printf("\n%s", newmsg);
	    xcmp(msg, newmsg, 6, 9, 20, 23);
	    printf("\n%s", newmsg);

	    return 0;
	 }

	/*The output of this program would be . . . .

	Vote Sunderban
	New7Wonder
	For
	Sunderban New7Wonder
	EQUAL
	NOT EQUAL
	*/
