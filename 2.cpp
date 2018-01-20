/*Write two classes to store distances in meter-centimeter and feet-inch system respectively.
 Write conversions functions so that the program can convert objects of both types*/
/* lab sheet 5 of c++ programming exercises in www.dsbaral.com*/

#include <iostream>
using namespace std;
class distancecgs;
class distancesi
{

private:
    float meters,centimeters;
public:

    distancesi():meters(0),centimeters(0)
    {

    }
    distancesi(float x,float y):meters(x),centimeters(y)
    {

    }

     float setmeters(float x)
    {
        meters=x;
    }
    float setcentimeters(float x)
    {
        centimeters=x;
    }
     operator distancecgs();

    void display()
    {
        cout<<"meters is "<<meters<<endl;
        cout<<"centimeters is "<<centimeters<<endl;
    }

};
class distancecgs
{

   float  foot,inches,tempmeters,tempcentimeters;
public:

     distancecgs():foot(0),inches(0)
    {

    }
    distancecgs(float x,float y):foot(x),inches(y)
    {

    }

    float setfoot(float x)
    {
        foot=x;
    }
    float setinches(float x)
    {
        inches=x;
    }
    operator distancesi()//casting function from type distancecgs to distancesi class
    {
        distancesi temp;
       temp.setmeters(foot*0.3048);
        temp.setcentimeters(inches*2.54);
        return temp;
    }
    void settempmeters(float meters)
    {
        tempmeters=meters;
    }
        void settempcentimeters(float centimeters)
        {
            tempcentimeters=centimeters;
        }
    void display()
    {
        cout<<tempmeters<<" meters is equal to "<<foot<<" feet"<<endl;
       cout<<tempcentimeters<<" centimeters is equal to "<<inches<<" inches"<<endl;
    }

};
distancesi::operator distancecgs()
{

        distancecgs temp;
        temp.setfoot(meters*3.28084);
        temp.settempmeters(meters);
        temp.settempcentimeters(centimeters);
        temp.setinches(centimeters*0.393701);
        return temp;

}
int main()
{
    distancesi mitesh(3,4);
    distancecgs pravesh(1,1);
    distancesi ganesh=pravesh;
    distancecgs ram=mitesh;
    ganesh.display();
    ram.display();
    return 0;
}
