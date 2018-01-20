#include <iostream>
using namespace std;
char musicstring[10][20]={"veena","guitar","sitar","sarod","mandolin"};
char musicwind[10][20]={"flute","clarinet","saxophone","nadhaswaram","piccolo"};
char musicperc[10][20]={"tabla","mridangam","bangos","drums","tambour"};
class musicians
{
protected:
    char **stringnames=new char *;
    char **windnames=new char *;
    char **percnames=new char *;
public:
    musicians()
    {

    }
    ~musicians()
    {

       delete (stringnames);

        delete windnames;
        delete percnames;
    }
    char ** getstringnames()
    {
        return stringnames;
    }
    char ** getwindnames()
    {
        return windnames;
    }
    char ** getpercnames()
    {
        return percnames;
    }

    void setsting()
    {


    for (int i=0;i<=4;i++)
    {
        *(stringnames+i)=new char ;
         *(stringnames+i)=*(musicstring+i);

    }
    }
    void showsting()
    {
        cout<<"The list of string instruments is as follows: "<<endl;
    for (int i=0;i<=4;i++)
    {
        //*(stringnames+i)=new char ;
       cout<<*(stringnames+i)<<endl;
    }
    }
    void setwind()
    {

    for (int i=0;i<=4;i++)
    {
        *(windnames+i)=*(musicwind+i);
    }
    }
    void showwind()
    {
        cout<<"The list of wind instruments is as follows: "<<endl;
    for (int i=0;i<=4;i++)
    {
        //*(windnames+i)=new char ;
       cout<<*(windnames+i)<<endl;
    }
    }
    void setperc()
    {

    for (int i=0;i<=4;i++)
    {
        *(percnames+i)=*(musicperc+i);

    }
    }
    void showperc()
    {
         cout<<"The list of percussion instruments is as follows: "<<endl;
    for (int i=0;i<=4;i++)
    {
        //*(percnames+i)=new char ;
       cout<<*(percnames+i)<<endl;
    }
    }

};
class typeins: public musicians
{
public:
    typeins(musicians p)
    {
        stringnames=p.getstringnames();
        windnames=p.getwindnames();
        percnames=p.getpercnames();
    }
    ~typeins()
    {


    //cout<<"typeins destructor"<<endl;

       /* delete(stringnames);   //why can't be used??
        delete(windnames);//because while the destuctor is called then typeins tries to delete the pointer member of the base class which is not allowdable
        delete (percnames);*/
    }
    void get()
    {
       cout<<"Types of instruments to be displayed is: "<<endl;
       cout<<"a. string instruments "<<endl;
       cout<<"b. wind instruments "<<endl;
       cout<<"c. perc instruments "<<endl;
    }
    void show()
    {
        char ch;
        cout<<"which one of the instruments you want to display (a/b/c) "<<endl;
        cin>>ch;
        switch (ch)
        {
        case 'a':
            showsting();
            break;
        case 'b':
            showwind();
            break;
        case 'c':
            showperc();
            break;

        }
    }
};
int main()
{
    musicians mitesh;
    mitesh.setsting();
    mitesh.setwind();
    mitesh.setperc();
    typeins pravesh(mitesh);

    pravesh.get();
    pravesh.show();
    return 0;
}
