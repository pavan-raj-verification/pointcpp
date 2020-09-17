#include "point.h"
#include<iostream>
#include<string>
#include<math.h>


point::point():x(0),y(0){};
point::point(float a,float b):x(a),y(b){};
point::point(const point& ref):x(ref.x),y(ref.y){};

float point::getx()
{
    return x;
}

float point::gety()
{
    return y;
}


float point::distancefromorigin(float a, float b)
{
    return sqrt((a*a)+(b*b));
}

string point::isorigin(float g,float h)
{
    if (g==0.0&&h==0.0)
    {
        return "YES";
    }
    else { return "NO";}
}

string point::isxaxis(float a,float b)
{

if(a==0.0&&b>=0.0){
    return "YES";}
else{
    return "NO";
}}


string point::isyaxis(float a,float b){

if(b==0.0&& a>=0.0){
    return "YES";}
else{
    return "NO";
}
}
string point::quadrant(float a,float b){

if(a>0&&b>0){
return "Q1";
}
else  if(a<0&&b>0)
{
    return "Q2";
}

else  if(a<0&&b<0)
{
    return "Q3";
}

else  if(a>0&&b<0)
{
    return "Q4";
}
else{
    return "ORIGIN";
}
}

void point::display()
 {
    std::cout << x << "," << y <<"\n";

}

