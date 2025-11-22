#include<iostream>
using namespace std;

class student 
{
    private:
    int age;
    string name;

    public:
    
    friend ostream& operator<<(ostream &out,const  student &s );
    friend istream&   operator>>(istream &in, student &s);
    int displayage()
    {
        return age;
    }
};
ostream& operator<<(ostream &out, const student &s)
{
    out<<"age is "<<s.age;
    out<<"name is "<<s.name ;

}
istream& operator>>(istream &in, student &s)
{
    cout<<"enter the age  ";
    in>>s.age;
    cout<<"enter the name ";
    in>>s.name;

}
int main()
{
    student s1;
    cin>>s1;
    cout<<s1;
    
}
