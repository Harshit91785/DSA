#include<iostream>
using namespace std;

class time
{
    private:
     int h ;
     int m;
     int s;


    public:
    void settime(int a,int b, int c )
    {
        h=a;
        m=b;
        s=c;
    }
    void normalizer()
    {
        if(s>=60)
        {
            s=s-60;
            m=m+1;
        }
        if(m>=60)
        {
            m=m-60;
            h=h+1;

        }
    }
    time operator+(time t)
    {
        time temp;
        temp.h=h+t.h;
        temp.m=m+t.m;
        temp.s=s+t.s;

        return temp;
    }
    void showtime()
    {
        cout<<h<<":"<<m<<":"<<s;
    }
};

int main()
{

    time t1,t2,t3; 
    t1.settime(2,30,45);
    t2.settime(4,54,75);
    //cout<<"addition of two time "<<endl;
    //c3=c1+c2; 
    t3=t1+t2;
    t1.showtime();
    cout<<endl;
    t2.showtime();
    cout<<endl;
    cout<<"time after normalizer of t2 ";
    t2.normalizer();
    t2.showtime();
    return 0;

} 