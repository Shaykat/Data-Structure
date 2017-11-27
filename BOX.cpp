#include <iostream>
using namespace std;
<string>
class BOX {
  double a,b,c,volume=0;
public:
    BOX(){};
    BOX(double e,double f,double g)
    {
       a=e;
       b=f;
       c=f;
    }

    double Vol()
    {
        volume = a*b*c;
        return volume;
    }

 };

 int main()
 {
     double e,f,g;
     cout << "Enter The Length of The sides of The Box: \n";
     cout << "length: ";
     cin >> e;
     cout << "wide: ";
     cin >> f;
     cout << "Hight: ";
     cin >> g;

     BOX ob(e,f,g);

     cout << "Volume of the box is: " << ob.Vol() << endl;

     return 0;
 }

