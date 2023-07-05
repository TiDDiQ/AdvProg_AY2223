#include <iostream>
#include <string>
#include <cmath>

using std::string;
using std::cout;
using std::endl;
using std::stod;


double mySin(double x);
double myCos(double x);
double mySqrt(double x);

/***
    Args:
        x (double): a number
    Returns:
        double: cosine of x
***/
double myCos(double x) 
{
    double cos = 0;
    double PowerNum = 1;
    for(int i=0; i<3000; i++){ 
        if (i>=2) {
            PowerNum = PowerNum*i;
        }
        cos = cos + ( pow(-1, i) / (2*PowerNum) ) * pow(x, 2*i);
    }
    cos = round(cos*10)/10;
    return cos;
}

/***
    Args:
        x (double): a number
    Returns:
        double: sine of x
***/
double mySin(double x)
{
    double sin = 0;
    for(int i=0; i<3000; i++) {
        double PowerNum = 1;
        for(int j=1; j<=2*i+1; j++) {
            PowerNum = PowerNum * j;
        }
        sin = sin + ( pow(-1, i) / PowerNum ) * pow(x, 2*i+1);
    }
    sin = round(sin*10)/10;
    return sin;
}


/***
    Args:
        x (double): a number
    Returns:
        double: square root of x
***/
double mySqrt(double x) {
    if (x < 0) {
        cout << "Invalid argument" << endl;
        exit(1);
    }
    else{
        double square = sqrt(x);
        square = round(square*10)/10;
        return square;
    }
}
