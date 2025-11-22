#include<iostream>
#include<string.h>
using namespace std;
struct book 
{
    int bookid;
    char name[20];
    int price;

};
void displaybook(book b)
{
    cout<<endl<<b.bookid<<' '<<b.name<<' '<<b.price ;
}
int main()
{   
    struct book b1={1,"java",550};
    struct book b2,b3;
    b2.bookid=2;
    strcpy(b2.name,"cpp");
    b2.price=200;
    displaybook(b2);
}
