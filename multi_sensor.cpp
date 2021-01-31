#include <iostream>
#include <math.h>
using namespace std;

const int mapWidth =  2;
const int mapHeight = 2;

void sensorFusion(double m1[][mapWidth], double m2[][mapWidth])
{
    //*#############TODO: Code the Sensor Fusion Function############*//
    // Fuse the measurments of the two maps and print the resulting 
    //map in a matrix form:
    //a  b
    //c  d



}

int main()
{

    double m1[mapHeight][mapWidth] = { { 0.9, 0.6 }, { 0.1, 0.5 } };
    double m2[mapHeight][mapWidth] = { { 0.3, 0.4 }, { 0.4, 0.3 } };
    sensorFusion(m1, m2);

    return 0;
}
