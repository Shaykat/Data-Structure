#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
double code1,unit1,price1;
double code2,unit2,price2,value_pay;


cin >> code1 >> unit1 >> price1;
cin >> code2 >> unit2 >> price2;

value_pay = (unit1 * price1) + (unit2 * price2);

cout<<"VALOR A PAGAR: R$ "<<fixed<< setprecision(2)<<value_pay<<endl;
return 0;
}
