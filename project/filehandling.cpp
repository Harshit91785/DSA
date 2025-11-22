#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int ID;
class student
{
    public:
    int id;
    string name;
    int age;
    string stream;

    void addstudent()
    {
        cout<<"enter your name";
        cin.get();
        getline(cin,name);

        cout<<"enter your age";
        cin>>age;

        cout<<"enter the stream";
        cin>>stream;

        ID++;

        ofstream fout;
        fout.open("C:/Users/om/OneDrive/Desktop/cpp/file/std.txt ",ios::app) ;
        fout<<"\n"<<ID;
        fout<<"\n"<<name;
        fout<<"\n"<<age;
        fout<<"\n"<<stream;
        fout.close();


        fout.open("C:/Users/om/OneDrive/Desktop/cpp/file/id.txt",ios::app); 
        fout<<"\n"<<ID;
        fout.close();

        cout<<"record added sucessfully";

    }
    void printallstudent()
    {
        ifstream fin;
        fin.open("C:/Users/om/OneDrive/Desktop/cpp/file/std.txt");
        student s;
        while(!fin.eof())
        {
            fin>>s.id;
            fin.ignore();
            getline(fin,s.name);
            fin>>s.age;
            fin>>s.stream;
            s.print();
        }

    }
    void print()
    {
        cout<<"id is "<<id;
        cout<<"name is "<<name;
        cout<<"age is "<<age;
        cout<<"stream is "<<stream;

    }
    void searchstudent(id)
    {
       ifstream fin;
       
       fin.open("C:/Users/om/OneDrive/Desktop/cpp/file/std.txt");
        student s;
        while(!fin.eof())
        {
            fin>>s.id;
            fin.ignore();
            getline(fin,s.name);
            fin>>s.age;
            fin>>s.stream;
            if(s.id==id)
            {
                s.print();
                break;
            }
        }
    }
    void deletestudent(int id)
    {
        ifstream fin;
        fin.open("C:/Users/om/OneDrive/Desktop/cpp/file/std.txt"); 
        ofstream fout;
        fout.open("C:/Users/om/OneDrive/Desktop/cpp/file/temp.txt",ios::app);
         student s;
        while(!fin.eof())
        {
            fin>>s.id;
            fin.ignore();
            getline(fin,s.name);
            fin>>s.age;
            fin>>s.stream;
            if(s.id!=id)
            {
                fout<<"\n"<<ID;
                fout<<"\n"<<name;
                fout<<"\n"<<age;
                fout<<"\n"<<stream;
            }
        }
        fin.close();
        fout.close();
        remove("C:/Users/om/OneDrive/Desktop/cpp/file/std.txt");
        rename("C:/Users/om/OneDrive/Desktop/cpp/file/temp.txt","C:/Users/om/OneDrive/Desktop/cpp/file/std.txt")
    }
    void updatestudent(id)
    {
         
    }

};

int main()
{
    student s;
    int id;
    int choice;
    ofstream fout;
    fout.open("C:/Users/om/OneDrive/Desktop/cpp/file/std.txt");
    fout.close();
    fout.open("C:/Users/om/OneDrive/Desktop/cpp/file/id.txt");
    fout.close();

    ifstream fin;
    fin.open("C:/Users/om/OneDrive/Desktop/cpp/file/std.txt");
    if(!fin)
    {
        cout<<"file not found"<<endl;
    }
    else{
    while(!fin.eof())
    {
        fin>>ID;
    }
    }
    fin.close();
    cout<<"last id is"<<ID;
    while(true)
    {
        cout<<"enter your choice";
        cout<<"1.add student "<<endl;
        cout<<"2. print all student "<<endl;
        cout<<"3. search a student "<<endl;
        cout<<"4. update a student "<<endl;
        cout<<"5. delete a student "<<endl;
        cin>>choice;
    }

    switch(choice)
    {
        case 1: s.addstudent();
             break;
        case 2: s.printallstudent();
             break;
        case 3:
                cout<<"enter the id"<<endl;
                cin>>id;
                 s.searchstudent(id);
                break;
        case 4: cout<<"enter the id"<<endl;
                cin>>id; 
                s.deletestudent(id);
        case 5: cout<<"enter the id"<<endl;
                cin>>id; 
                s.updatestudent(id);       

    }
    return 0;
}
