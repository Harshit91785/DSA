#include<iostream>
#include<string.h>
using namespace std;

class student 
{
    private:
     string name ;
     int age ;
     int phn;

    public:
    // default constructor : 
    student() 
    {
        name = "harshit";
        age=20;
        phn=564747;
         
    }
    void displaydata()
    {
        cout<<name<<"  "<<age<<"   "<<phn ;
    }
};

int main()
{

    student s1;
    s1.displaydata();
   
    return 0;

} 