//data hiding using public and private
//can make fuction in struture only which use structure objects
//use of structure keyword is optional

#include<iostream>
#include<string.h>
using namespace std;
struct book 
{   
    private:
    int bookid;
    char name[20];
    int price;
    public:
    void displaybook()
     {
        cout<<endl<<bookid<<' '<<name<<' '<<price ;
     }
     void inputbook()
     { 
        
        cout<<"enter the book id ,book  name, book price ";
        cin>>bookid;
        cin.ignore();
        cin.getline(name,20);
        cin>>price;

     }
};

int main()
{   
    struct book b1;
    b1.inputbook();
    b1.displaybook();

}