#include <iostream>
#include<string>
using namespace std;

class account {
  string account_name ,account_num,bank_name;
  int balance;
public:
    account(){};
    account(string bn,string n,string an)
    {
        bank_name = bn;
        account_name=n;
        account_num = an;
    }

    int deposit(int dept)
    {
        balance = dept;
        return balance;
    }

    void withdraw(int w)
    {
        balance = balance - w;
        cout << "withdraw money:  " << w << endl;
        cout << "Balance after withdraw: " << balance << endl;
    }

    void account_details()
    {
        cout << "Bank name: "<< bank_name << endl;
        cout << "Acount Name: " << account_name << endl;
        cout << "Account Number: " << account_num << endl;
        cout << "Current Balance: " << balance << endl;

    }

 };



 int main ()
 {
     string bn,n,an;
     int dept,w;
     bn = "DHAKA bANK";
     n= "Hasen Wasi Fuad";
     an= "142563";

     account ob(bn,n,an);
     ob.account_details();
     cout << "Enter amount of money you want to deposit: ";
     cin >> dept;
     cout << ob.deposit(dept) << endl;
     cout << "Enter amount of money you want to withdraw: ";
     cin >> w;
     ob.withdraw(w);
     cout << "account details: " << endl << endl;
     ob.account_details();



     return 0;
 }



