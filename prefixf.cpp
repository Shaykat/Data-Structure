#include <iostream>
#include <conio.h>
#include <string.h>
#define size 50

using namespace std;

char stack[size];
int top = -1;

//Push Function
 void push(char item){
 top++;
 stack[top]=item;
}

//Pop Function
 char pop(){
 char a;
 a=stack[top];
 top--;
  return a;
}


//Function to analyze the precidence of operators
int prcd(char C){
 switch(C) {
	case '+':
	case '-':
	 return 1;
	case '*':
	case '/':
	 return 2;
	case '(':
	case ')':
	case '#':
	 return 0;
 }
}

//Function for sort operators by priority
int isoperator(char C){
 switch(C) {
	case '+':
	case '-':
	case '*':
	case '/':
	case '(':
	case ')':
	 return 1;
	default:
	 return 0;
 }
}

//Function to invert infix to prefix
void convertip(char infix[],char prefix[]){
int i,j=0;
char test[size],C;

infix=strrev(infix); //Used 'strrev' to reverse string
stack[++top]='#';

for(i=0;i<strlen(infix);i++){
 C=infix[i];
  if(isoperator(C)==0){
   prefix[j]=C;
   j++;
  }
  else{
   if(C==')'){
    push(C);
   }
   else if(C=='('){
    while(stack[top]!=')'){
     prefix[j]=pop();
     j++;
    }
    pop();//pop out (.
   }
   else{
    if(prcd(C)>prcd(stack[top])) {
    push(C);
   }
   else{
    while(prcd(C)<=prcd(stack[top])) {
     prefix[j]=pop();
     j++;
    }
    push(C);
   }//end of else.
  }//end of else.
 }//end of else.
}//end of for.

while(stack[top]!='#'){
 prefix[j]=pop();
 j++;
}

prefix[j]='\0';//null terminate string.
prefix=strrev(prefix);
}




int main() {
char infix[20],prefix[20];

cout << "Enter the valid infix string: " << endl;
cin >> infix;
convertip(infix,prefix);
cout << "The corresponding prefix string is: " << endl;
cout << prefix;

getch();
return 0;

}



