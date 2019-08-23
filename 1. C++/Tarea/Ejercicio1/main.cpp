
// C++ program for Babylonian 

#include <iostream>
using namespace std;

class gfg {

public:
    float squareRoot(float n)
    {
        /*We are using n itself as initial approximation*/
        float x = n;
        float y = 1;

        /* e decides the accuracy*/
        float e = 0.000001;
        while (x - y > e) {
            x = (x + y) / 2;
            y = n / x;
        }
        return x;
    }
};

//n = 4 /*n initial approximation*/
//Initialize x = 4, y = 1
//Next Approximation x = (x + y)/2 (= 2.500000),
//y = n/x  (=1.600000)
//Next Approximation x = 2.050000,
//        y = 1.951220
//Next Approximation x = 2.000610,
//        y = 1.999390
//Next Approximation x = 2.000000,
//        y = 2.000000
//Terminate as (x - y) > e now.
int main()
{
    gfg g;
    int n = 49;
    cout << "Square root of " << n << " is " << g.squareRoot(n);
    getchar();
} 
  