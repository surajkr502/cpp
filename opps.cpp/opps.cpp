#include <iostream>
#include <cstring>
using namespace std;
// class student
// {
// private:
//     int roll;
//     char grade;
//     float per;
// public:
//     void get();
//     void show();
// };
// void student::get()
// {
//     cout<<"Enter roll,grade and per:";
//     cin>>roll>>grade>>per;
// }
// void student::show()
// {
//     cout<<roll<<","<<grade<<","<<per<<endl;
// }
// int main()
// {
//     student s;
//     s.get();
//     s.show();
//     return 0;

// }


class Emp
{
    private:
        int age;
        float salary;
        char name[20];
    public: 
        void set(int,float,const char*);
        void show();
};
void Emp::set(int a,float s,const char* p)
{
    age=a;
    strcpy(name,p);
    salary=s;
}
void Emp::show()
{
    cout<<age<<","<<salary<<","<<name<<endl;
}
int main()
{
    Emp E,F;
    E.set(25,30000,"Rahul");
    F.set(30,50000,"Mohan");
    E.show();
    F.show();
    return 0;
}




