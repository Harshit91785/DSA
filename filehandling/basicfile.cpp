#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    string line;
    fout.open("C:/Users/om/OneDrive/Desktop/cpp/file/abc.txt",ios::app);

    if(!fout)
    {
        cout<<"file not created";

    }
    else{
        while(fout)
        {
            getline(cin,line);
            if(line== " -1")
            break;
        }
        cout<<"file created successfully"<<endl;
    }
    fout.close();
    return 0;

}