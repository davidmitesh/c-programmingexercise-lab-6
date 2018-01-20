#include <iostream>
using namespace std;
class dist
{
private:
    int meters,centimeters;
public:
    dist():meters(0),centimeters(0)
    {

    }
    dist(int x,int y):meters(x),centimeters(y)
    {

    }
    operator float()
    {
        float x;
        x=meters+centimeters/100.00;
        return x;
    }
    dist(float x)
    {

        meters=x;
         cout<<x<<endl;
        float remainder=x-meters;
        centimeters=remainder*100.00;

    }
    void display()
    {
        cout<<"meters is "<<meters<<endl;
        cout<<"centimeters is " <<centimeters<<endl;
    }

};
int main()
{
    dist mitesh(2,4);
    float y=mitesh;
    float z=2.55;
    cout<<"the result is"<<y<<endl;
    dist pravesh=z;
    pravesh.display();

    return 0;
}
