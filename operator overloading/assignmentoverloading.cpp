#include<iostream>
#include<cstring>
using namespace std;


class mystring{
    private:
    int size;
    char* a;

    public:
    mystring()
    { 
        cout<<"default consturctor ";
        a=(char*)malloc(1);   // ye bhit jaruri ha varna ghar hoga nhi or hume free kare rahe ha or kuch bhi print nhi hogaa 
        size=1;

    }
    
    mystring(const char *str)
    {
        cout<<"string construtor"<<endl;
        size=strlen(str);
        a=(char *)malloc(size+1);
        strcpy(a,str);

    }
    void dsplay()
    {
        cout<<a<<endl;

    }
    void change(char* str)
    {
        free(a);
        size=strlen(str);
        a=(char*)malloc(size+1);
        strcpy(a , str);


    }
    //copy construtor
    mystring(mystring &s)
    {
        size=strlen(s.a);
        a=(char*)malloc(size+1);
        strcpy(a ,s.a);
        
    } 
    // assignment operator overloading 
    mystring& operator=(const mystring& s)
    {
        cout<<"assignment operator called "<<endl;
        if(a==s.a)
        {
            return *this;
        }
        free(a);
        size=strlen(s.a);
        a=(char*)malloc(size+1);
        strcpy(a,s.a);
        return *this;

    }   
};
int main()
{
    mystring s1("harshit");
    mystring s2=s1;
    mystring s3;
    s3=s1;
    mystring s4("student");


    s1.change("jangra");

    s1.dsplay();
    s2.dsplay();
    s3.dsplay();
    s4.dsplay();
    return 0;

}