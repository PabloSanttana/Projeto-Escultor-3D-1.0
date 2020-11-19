#include <iostream>
#include "sculptor.hpp"
#include <math.h>

using namespace std;




int main()
{
    Sculptor   v(30,30,30);

       v.setColor(0,1,0,1);
       v.putEllipsoid(10,10,10,5,6,10);
       v.putBox(0,5,0,4,0,3);
       v.writeOFF((char*)"teste00.off");

    cout << "Finalizado!"<< endl;
    return 0;
}
