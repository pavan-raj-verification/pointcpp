#include<string>
#include<iostream>
using namespace std;

class point{

float x,y;

public:
    point ();
    point (float,float);
    point (const point &);


    float getx();
    float gety();

    float distancefromorigin(float,float);
    string quadrant(float,float);
    string isorigin(float,float);

    string isyaxis(float,float);
    string isxaxis(float,float);

    void display();


};
