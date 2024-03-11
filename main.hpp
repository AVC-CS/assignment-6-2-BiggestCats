//

#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int getRandom(void);
int getClosestMed(int, int, int);

// complete two functions
int getRandom(void)
{
        /***************************************************
         * Code your program here
         ***************************************************/
        int valX;
        
        valX = rand() % 100;
        return valX;
}
int getClosestMed(int rdnum1, int rdnum2, int rdnum3)
{
        /***************************************************
         * Code your program here
         ***************************************************/
        int avg, valY, diff1, diff2, diff3;
        avg = (rdnum1 + rdnum2 + rdnum3)/3;
        diff1 = abs(avg - rdnum1);
        diff2 = abs(avg - rdnum2);
        diff3 = abs(avg - rdnum3);
        if ((diff1 < diff2) && (diff1 < diff3)){
                valY = rdnum1;
        } else if ((diff2 < diff1) && (diff2 < diff3)){
                valY = rdnum2;
        } else if ((diff3 < diff1) && (diff3 < diff2)){
                valY = rdnum3;
        }
        return valY;
}